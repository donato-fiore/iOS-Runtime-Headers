// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSURVEYQUESTIONSHORIZONTALGADGETPROVIDER_H
#define PXSURVEYQUESTIONSHORIZONTALGADGETPROVIDER_H

@class NSDate;
@protocol PXSurveyQuestionsGadgetProviderDelegate, PXForYouRankable;


#import "PXHorizontalCollectionGadgetProvider.h"
#import "PXSurveyQuestionsHorizontalGadgetProviderConfiguration.h"

@interface PXSurveyQuestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXSurveyQuestionsGadgetProviderDelegate, PXForYouRankable>

 {
    PXSurveyQuestionsHorizontalGadgetProviderConfiguration *_configuration;
}


@property (copy, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;


-(BOOL)supportsDynamicRanking;
-(id)hideForeverAlertMessageForHorizontalCollectionGadget:(id)arg0 ;
-(id)infoAlertMessageForHorizontalCollectionGadget:(id)arg0 ;
-(id)infoAlertTitleForHorizontalCollectionGadget:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3 ;
-(id)radarConfigurationForHorizontalCollectionGadget:(id)arg0 ;
-(void)didAnswerQuestionForGadgetProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)horizontalCollectionGadget:(id)arg0 configureCustomInfoAlertActionsForAlertController:(id)arg1 ;
-(void)horizontalCollectionGadget:(id)arg0 hideUntilDate:(id)arg1 ;


@end


#endif