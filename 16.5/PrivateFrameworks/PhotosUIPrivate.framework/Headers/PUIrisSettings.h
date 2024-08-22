// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIRISSETTINGS_H
#define PUIRISSETTINGS_H

@class PXSettings;



@interface PUIrisSettings : PXSettings

@property (nonatomic) BOOL shouldAlwaysBadge; // ivar: _shouldAlwaysBadge
@property (nonatomic, getter=showStatusBorder) BOOL showStatusBorder; // ivar: _showStatusBorder
@property (nonatomic, getter=isVitalityAllowed) BOOL vitalityAllowed; // ivar: _vitalityAllowed


+(id)_photosPlayerRootSettings;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)performPostSaveActions;
-(void)restoreDefaultValues;
-(void)setDefaultValues;


@end


#endif