// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITINGERRORPRESENTATIONCONTROLLER_H
#define PUEDITINGERRORPRESENTATIONCONTROLLER_H



#import "PUErrorPresentationController.h"

@interface PUEditingErrorPresentationController : PUErrorPresentationController



+(BOOL)errorIsDownloadError:(id)arg0 ;
+(NSInteger)editingErrorTypeFromError:(id)arg0 ;
+(id)_hardwareModelSpecificMessageForKeyPrefix:(id)arg0 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)shouldShowFileRadarAction;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg0 ;
-(id)initWithError:(id)arg0 forAsset:(id)arg1 ;
-(void)configureAlertPropertiesFromError:(id)arg0 withAssets:(id)arg1 willShowFileRadarButton:(BOOL)arg2 alertCompletion:(id)arg3 ;
-(void)configureRadarPropertiesFromError:(id)arg0 withAssets:(id)arg1 ;


@end


#endif