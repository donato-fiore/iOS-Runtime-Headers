// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUERRORPRESENTATIONCONTROLLER_H
#define PUERRORPRESENTATIONCONTROLLER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PUErrorPresentationController : NSObject

@property (copy, nonatomic) NSArray *additionalAlertActions; // ivar: _additionalAlertActions
@property (copy, nonatomic) NSArray *additionalQuestionsInRadarDescription; // ivar: _additionalQuestionsInRadarDescription
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (copy, nonatomic) NSString *assetsListDescription; // ivar: _assetsListDescription
@property (copy, nonatomic) NSString *dismissButtonTitle; // ivar: _dismissButtonTitle
@property (readonly, nonatomic) NSArray *errors; // ivar: _errors
@property (readonly, copy, nonatomic) NSString *radarComponentID; // ivar: _radarComponentID
@property (readonly, copy, nonatomic) NSString *radarComponentName; // ivar: _radarComponentName
@property (readonly, copy, nonatomic) NSString *radarComponentVersion; // ivar: _radarComponentVersion
@property (copy, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (copy, nonatomic) NSString *radarTitle; // ivar: _radarTitle


+(BOOL)assetIsStandardVideo:(id)arg0 ;
+(BOOL)errorIsAuthenticationRelatedCPLError:(id)arg0 ;
+(BOOL)errorIsLowDiskSpaceRelatedCPLError:(id)arg0 ;
+(BOOL)isNetworkRelatedError:(id)arg0 ;
+(id)alertActionForNavigatingToDestination:(NSInteger)arg0 withTitle:(id)arg1 completion:(id)arg2 ;
-(BOOL)shouldIncludeAssetInRadarDescription:(id)arg0 ;
-(BOOL)shouldShowFileRadarAction;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg0 ;
-(id)alertControllerWithCompletion:(id)arg0 ;
-(id)assetsDescriptionFromAssets:(id)arg0 ;
-(id)initWithErrors:(id)arg0 forAssets:(id)arg1 ;
-(void)configureAlertPropertiesFromError:(id)arg0 withAssets:(id)arg1 willShowFileRadarButton:(BOOL)arg2 alertCompletion:(id)arg3 ;
-(void)configureRadarPropertiesFromError:(id)arg0 withAssets:(id)arg1 ;


@end


#endif