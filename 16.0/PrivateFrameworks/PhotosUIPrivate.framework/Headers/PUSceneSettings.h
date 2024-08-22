// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSCENESETTINGS_H
#define PUSCENESETTINGS_H

@class PXSettings;



@interface PUSceneSettings : PXSettings

@property (nonatomic) NSUInteger inspectorSortOrder; // ivar: _inspectorSortOrder
@property (nonatomic) BOOL showConfidenceOverlay; // ivar: _showConfidenceOverlay


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif