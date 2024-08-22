// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSURVEYRADARREPORTERVIEWCONTROLLER_H
#define PXSURVEYRADARREPORTERVIEWCONTROLLER_H

@class OBWelcomeController, UILabel, OBTrayButton, UIButton;


#import "PXRadarConfiguration.h"

@interface PXSurveyRadarReporterViewController : OBWelcomeController {
    PXRadarConfiguration *_configuration;
    id *_completionHandler;
}


@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) OBTrayButton *notNowButton; // ivar: _notNowButton
@property (retain, nonatomic) UIButton *readReleaseAgreementButton; // ivar: _readReleaseAgreementButton


-(id)attributedDetailText;
-(id)initWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)_didSelectReadReleaseAgreementButton;
-(void)_handleAgreeButton:(id)arg0 ;
-(void)_handleNotNowButton:(id)arg0 ;


@end


#endif