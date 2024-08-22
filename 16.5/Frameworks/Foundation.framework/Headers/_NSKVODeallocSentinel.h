// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKVODEALLOCSENTINEL_H
#define _NSKVODEALLOCSENTINEL_H


#import <Foundation/Foundation.h>


@interface _NSKVODeallocSentinel : NSObject {
    id *_observedObject;
}




+(void)_havingRegistrationLockHeldAttachSentinelToObjectIfNeeded:(id)arg0 ;
-(id)_initWithObservedObject:(id)arg0 ;
-(void)dealloc;


@end


#endif