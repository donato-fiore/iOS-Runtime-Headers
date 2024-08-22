// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSHARINGERRORPRESENTATIONCONTROLLER_H
#define PUSHARINGERRORPRESENTATIONCONTROLLER_H

@class NSDictionary;


#import "PUErrorPresentationController.h"

@interface PUSharingErrorPresentationController : PUErrorPresentationController

@property (copy, nonatomic) NSDictionary *itemSourcesByAssetUUID; // ivar: _itemSourcesByAssetUUID
@property (readonly, nonatomic) NSInteger preparationType; // ivar: _preparationType
@property (readonly, nonatomic) NSUInteger source; // ivar: _source


+(BOOL)errorIsDownloadError:(id)arg0 ;
+(BOOL)errorIsLowDiskSpaceError:(id)arg0 ;
+(BOOL)errorIsUserNeedsReviewCloudSettingsError:(id)arg0 ;
+(NSInteger)errorTypeFromSimulatedErrorType:(NSInteger)arg0 ;
+(NSInteger)sharingErrorTypeFromError:(id)arg0 ;
+(id)_defaultTitleForDownloadErrorForAssets:(id)arg0 forSource:(NSUInteger)arg1 ;
+(id)_defaultTitleForSource:(NSUInteger)arg0 assets:(id)arg1 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg0 forAssets:(id)arg1 ;
-(BOOL)shouldIncludeAssetInRadarDescription:(id)arg0 ;
-(BOOL)shouldShowFileRadarAction;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg0 ;
-(id)initWithErrors:(id)arg0 forAssets:(id)arg1 fromSource:(NSUInteger)arg2 preparationType:(NSInteger)arg3 ;
-(void)configureAlertPropertiesFromError:(id)arg0 withAssets:(id)arg1 willShowFileRadarButton:(BOOL)arg2 alertCompletion:(id)arg3 ;
-(void)configureRadarPropertiesFromError:(id)arg0 withAssets:(id)arg1 ;


@end


#endif