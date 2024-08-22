// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSMEDUSAAPPLICATIONSHORTCUTSERVICE_H
#define SBSMEDUSAAPPLICATIONSHORTCUTSERVICE_H



#import "SBSAbstractApplicationService.h"

@interface SBSMedusaApplicationShortcutService : SBSAbstractApplicationService



-(void)fetchSupportedMedusaShortcutActionsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performMedusaShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif