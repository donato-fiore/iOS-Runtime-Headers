// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDOCUMENTMENUSETTINGS_H
#define PXDOCUMENTMENUSETTINGS_H



#import "PXSettings.h"

@interface PXDocumentMenuSettings : PXSettings

@property (nonatomic) NSInteger actionsMenuLocation; // ivar: _actionsMenuLocation
@property (nonatomic) BOOL enableActionsMenuOnPad; // ivar: _enableActionsMenuOnPad
@property (nonatomic) BOOL enableActionsMenuOnPhone; // ivar: _enableActionsMenuOnPhone
@property (nonatomic) BOOL excludeActionsFromShareSheet; // ivar: _excludeActionsFromShareSheet
@property (nonatomic) BOOL showAddToSharedAlbumAction; // ivar: _showAddToSharedAlbumAction


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif