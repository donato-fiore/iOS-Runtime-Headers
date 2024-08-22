// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHROOTFOLDERSETTINGS_H
#define SBHROOTFOLDERSETTINGS_H

@class PTSettings;



@interface SBHRootFolderSettings : PTSettings

@property (nonatomic, getter=isAdjustableLayoutEnabled) BOOL adjustableLayoutEnabled; // ivar: _adjustableLayoutEnabled
@property (nonatomic) CGFloat dockAdditionalIconInset; // ivar: _dockAdditionalIconInset
@property (nonatomic) CGFloat landscapeBottomLayoutInset; // ivar: _landscapeBottomLayoutInset
@property (nonatomic) CGFloat landscapeSideLayoutInset; // ivar: _landscapeSideLayoutInset
@property (nonatomic) CGFloat landscapeTopLayoutInset; // ivar: _landscapeTopLayoutInset
@property (nonatomic) CGFloat portraitBottomLayoutInset; // ivar: _portraitBottomLayoutInset
@property (nonatomic) CGFloat portraitSideLayoutInset; // ivar: _portraitSideLayoutInset
@property (nonatomic) CGFloat portraitTopLayoutInset; // ivar: _portraitTopLayoutInset


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif