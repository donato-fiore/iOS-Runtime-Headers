// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHACCESSIBILITYASSERTIONMANAGER_H
#define HDSHACCESSIBILITYASSERTIONMANAGER_H

@class HDAssertion, HDProfile, NSString;
@protocol HDContentProtectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSHAccessibilityAssertionManager : NSObject <HDContentProtectionObserver>

 {
    HDAssertion *_accessibilityAssertion;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}


@property (readonly, nonatomic) HDAssertion *accessibilityAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldBeObservingContentProtectionState;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_queue_takeAccessibilityAssertion;
-(void)_restoreContentProtectionObservingState;
-(void)beginObservingContentProtectionState;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidateAccessibilityAssertion;
-(void)stopObservingContentProtectionState;


@end


#endif