// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHCANCELWHENBACKLIGHTINACTIVATESATTRIBUTEENTRY_H
#define BLSHCANCELWHENBACKLIGHTINACTIVATESATTRIBUTEENTRY_H

@class BLSBacklight, NSString;
@protocol BLSBacklightStateObserving;


#import "BLSValidWhenBacklightInactiveAttributeEntry.h"

@interface BLSHCancelWhenBacklightInactivatesAttributeEntry : BLSValidWhenBacklightInactiveAttributeEntry <BLSBacklightStateObserving>

 {
    BLSBacklight *_backlight;
    os_unfair_lock_s _lock;
    BOOL _lock_active;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reactivateIfPossible;
-(id)initForAttribute:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)invalidate;


@end


#endif