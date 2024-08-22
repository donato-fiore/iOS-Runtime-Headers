// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICKPFEEDBACKADAPTER_H
#define SUICKPFEEDBACKADAPTER_H

@class NSString;
@protocol SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying, CRKFeedbackDelegate;

#import <Foundation/Foundation.h>


@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CRKFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldHandleCardSectionEngagement:(id)arg0 ;
-(id)feedbackListener;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 animate:(BOOL)arg1 ;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didReportUserResponseFeedback:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;
-(void)presentViewControllerForCard:(id)arg0 animate:(BOOL)arg1 ;
-(void)willDismissViewController:(id)arg0 ;


@end


#endif