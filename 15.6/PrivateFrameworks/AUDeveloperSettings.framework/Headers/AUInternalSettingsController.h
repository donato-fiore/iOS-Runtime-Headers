// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUINTERNALSETTINGSCONTROLLER_H
#define AUINTERNALSETTINGSCONTROLLER_H

@class PSListController;



@interface AUInternalSettingsController : PSListController



+(void)badgeSettingsForAssetLocationFollowup;
+(void)clearSettingsAssetLocationForFollowup;
-(id)createInternalSpecifiers;
-(id)specifiers;
-(void)viewDidLoad;


@end


#endif