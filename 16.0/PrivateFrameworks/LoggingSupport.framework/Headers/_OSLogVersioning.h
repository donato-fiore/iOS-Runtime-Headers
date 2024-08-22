// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGVERSIONING_H
#define _OSLOGVERSIONING_H


#import <Foundation/Foundation.h>

#import "_OSLogCollectionReference.h"

@interface _OSLogVersioning : NSObject {
    _OSLogCollectionReference *_lcr;
    BOOL _closeOnRelease;
}


@property (readonly, nonatomic) BOOL hasEndTimeRef; // ivar: _hasEndTimeRef
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)checkTimesyncDB:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)performDestructiveUpdates:(*id)arg0 ;
-(BOOL)repairTimesyncDB:(*id)arg0 ;
-(id)initWithCollection:(id)arg0 closeOnRelease:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithCollection:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif