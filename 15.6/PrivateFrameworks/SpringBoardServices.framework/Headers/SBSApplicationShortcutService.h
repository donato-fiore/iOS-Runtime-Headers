// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSAPPLICATIONSHORTCUTSERVICE_H
#define SBSAPPLICATIONSHORTCUTSERVICE_H



#import "SBSAbstractApplicationService.h"

@interface SBSApplicationShortcutService : SBSAbstractApplicationService



-(id)applicationShortcutItemsOfTypes:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)fetchApplicationShortcutItemsOfTypes:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(id)arg0 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg0 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif