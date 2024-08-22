// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPASTEBOARDASSETSETTINGS_H
#define PXPASTEBOARDASSETSETTINGS_H



#import "PXSettings.h"

@interface PXPasteboardAssetSettings : PXSettings

@property (nonatomic) BOOL alwaysUseDataProviderForObjectReference; // ivar: _alwaysUseDataProviderForObjectReference
@property (nonatomic) BOOL fileURLEnabled; // ivar: _fileURLEnabled
@property (nonatomic) BOOL imageDataEnabled; // ivar: _imageDataEnabled
@property (nonatomic) BOOL synchronousFullSizePreviewEnabled; // ivar: _synchronousFullSizePreviewEnabled


+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif