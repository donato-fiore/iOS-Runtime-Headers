// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONSHORIZONTALGADGETPROVIDERCONFIGURATION_H
#define PXSURVEYQUESTIONSHORIZONTALGADGETPROVIDERCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionsGadgetProvider.h"
#import "PXRadarConfiguration.h"

@interface PXSurveyQuestionsHorizontalGadgetProviderConfiguration : NSObject {
    NSInteger _category;
    id *_customInfoAlertActionViewControllerProvider;
    NSString *_radarTitle;
    NSArray *_radarKeywordIDs;
}


@property (readonly, copy, nonatomic) NSString *customInfoAlertActionTitle;
@property (readonly, nonatomic) PXSurveyQuestionsGadgetProvider *gadgetProvider; // ivar: _gadgetProvider
@property (readonly, copy, nonatomic) NSString *hideDateDefaultsKey;
@property (readonly, copy, nonatomic) NSString *hideForeverAlertMessage;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *infoAlertMessage;
@property (readonly, copy, nonatomic) NSString *infoAlertTitle;
@property (readonly, copy, nonatomic) PXRadarConfiguration *radarConfiguration;
@property (readonly, copy, nonatomic) NSString *radarPromptAnsweredQuestionCountDefaultsKey;
@property (readonly, copy, nonatomic) NSString *radarPromptDateDefaultsKey;
@property (readonly, copy, nonatomic) NSString *sectionTitle;


+(id)generalConfiguration;
-(id)_initWithCategory:(NSInteger)arg0 gadgetProvider:(id)arg1 ;
-(id)customInfoAlertActionViewController:(*id)arg0 ;
-(id)init;


@end


#endif