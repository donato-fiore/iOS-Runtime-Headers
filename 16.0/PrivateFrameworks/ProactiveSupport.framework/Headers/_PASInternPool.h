// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASINTERNPOOL_H
#define _PASINTERNPOOL_H

@class PASZonedObject;


#import "_PASLock.h"

@interface _PASInternPool : PASZonedObject {
    _PASLock *_lock;
    id *_copyWithZone;
}




-(BOOL)isEmpty;
-(BOOL)isInterned:(id)arg0 ;
-(id)init;
-(id)initWithBehavior:(NSUInteger)arg0 copyWithZone:(id)arg1 ;
-(id)intern:(id)arg0 ;
-(id)internNoCopy:(id)arg0 ;
-(void)clear;


@end


#endif