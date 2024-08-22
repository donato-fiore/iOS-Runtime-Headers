// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCONVERSATIONCONTEXT_H
#define STCONVERSATIONCONTEXT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface STConversationContext : NSObject

@property (copy) NSDictionary *allowedByContactsHandle; // ivar: _allowedByContactsHandle
@property BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property BOOL applicationCurrentlyLimited; // ivar: _applicationCurrentlyLimited
@property (copy) NSDictionary *contactsByHandle; // ivar: _contactsByHandle
@property NSUInteger currentApplicationState; // ivar: _currentApplicationState
@property BOOL emergencyModeEnabled; // ivar: _emergencyModeEnabled
@property BOOL shouldBeAllowedByScreenTimeWhenLimited; // ivar: _shouldBeAllowedByScreenTimeWhenLimited
@property BOOL shouldBeAllowedDuringGeneralScreenTime; // ivar: _shouldBeAllowedDuringGeneralScreenTime
@property (copy) NSArray *whitelistedHandles; // ivar: _whitelistedHandles


-(id)init;
-(void)updateForThirdPartyApplicationState:(NSInteger)arg0 ;
-(void)updateShouldBeAllowedDuringGeneralScreenTime:(BOOL)arg0 shouldBeAllowedByScreenTimeWhenLimited:(BOOL)arg1 currentApplicationState:(NSUInteger)arg2 emergencyModeEnabled:(BOOL)arg3 ;


@end


#endif