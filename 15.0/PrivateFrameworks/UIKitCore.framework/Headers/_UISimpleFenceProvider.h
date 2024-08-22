// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISIMPLEFENCEPROVIDER_H
#define _UISIMPLEFENCEPROVIDER_H

@class BSAtomicFlag, NSString;
@protocol UIFenceProviding;

#import <Foundation/Foundation.h>


@interface _UISimpleFenceProvider : NSObject <UIFenceProviding>

 {
    BSAtomicFlag *_trackingAny;
    BOOL _synchronizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isTrackingAnySystemAnimationFence;
-(BOOL)trackSystemAnimationFence:(id)arg0 ;
-(id)init;
-(id)requestSystemAnimationFence;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id)arg0 ;


@end


#endif