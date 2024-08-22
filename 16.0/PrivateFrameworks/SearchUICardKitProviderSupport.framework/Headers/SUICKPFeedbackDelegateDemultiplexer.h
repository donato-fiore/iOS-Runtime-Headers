// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICKPFEEDBACKDELEGATEDEMULTIPLEXER_H
#define SUICKPFEEDBACKDELEGATEDEMULTIPLEXER_H

@class NSString, NSMutableDictionary;
@protocol SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>


@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SearchUIFeedbackDelegate> *defaultDelegate; // ivar: _defaultDelegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionIdentifiers; // ivar: _feedbackDelegatesByCardSectionIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionViewIds; // ivar: _feedbackDelegatesByCardSectionViewIds
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldHandleCardSectionEngagement:(id)arg0 ;
-(id)_delegateForFeedback:(id)arg0 ;
-(id)_delegateForView:(id)arg0 ;
-(id)init;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 animate:(BOOL)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(NSInteger)arg0 ;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didErrorOccur:(id)arg0 ;
-(void)didReportUserResponseFeedback:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;
-(void)presentViewControllerForCard:(id)arg0 animate:(BOOL)arg1 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;
-(void)sendCustomFeedback:(id)arg0 ;
-(void)willDismissViewController:(id)arg0 ;


@end


#endif