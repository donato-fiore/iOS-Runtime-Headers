// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDRAGANDDROPSETTINGS_H
#define PXDRAGANDDROPSETTINGS_H



#import "PXSettings.h"

@interface PXDragAndDropSettings : PXSettings

@property (nonatomic) BOOL alwaysAllowDragsWithinUserAlbums; // ivar: _alwaysAllowDragsWithinUserAlbums
@property (nonatomic) BOOL dragOutEnabled; // ivar: _dragOutEnabled
@property (nonatomic) CGFloat dropGestureSpeedLimit; // ivar: _dropGestureSpeedLimit
@property (nonatomic) NSInteger reorderCadence; // ivar: _reorderCadence
@property (nonatomic) BOOL springLoadingEnabled; // ivar: _springLoadingEnabled
@property (nonatomic) BOOL useData; // ivar: _useData
@property (nonatomic) BOOL useFileProvider; // ivar: _useFileProvider


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif