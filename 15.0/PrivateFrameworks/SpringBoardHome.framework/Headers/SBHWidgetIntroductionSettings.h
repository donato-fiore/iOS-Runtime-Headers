// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGETINTRODUCTIONSETTINGS_H
#define SBHWIDGETINTRODUCTIONSETTINGS_H

@class PTSettings;



@interface SBHWidgetIntroductionSettings : PTSettings

@property (nonatomic) BOOL bumpLeastUsedApps; // ivar: _bumpLeastUsedApps
@property (nonatomic) BOOL editButtonAsUndo; // ivar: _editButtonAsUndo
@property (nonatomic) BOOL showWidgetIntroConvenienceControl; // ivar: _showWidgetIntroConvenienceControl
@property (nonatomic) BOOL showXLTVWidget; // ivar: _showXLTVWidget
@property (nonatomic) BOOL simpleBottomSnaking; // ivar: _simpleBottomSnaking


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif