// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICKPCARDVIEWCONTROLLERPROVIDER_H
#define SUICKPCARDVIEWCONTROLLERPROVIDER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate;

#import <Foundation/Foundation.h>


@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate>

 {
    NSMutableDictionary *_cardsByCardSectionIdentifiers;
    NSMutableDictionary *_cardViewControllersByCardIdentifiers;
    NSMutableArray *_pendingDismissalCommands;
    NSInteger _preferredPunchoutIndex;
    CGSize _preferredContentSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *feedbackDelegateDemultiplexersByCardIdentifiers; // ivar: _feedbackDelegateDemultiplexersByCardIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg0 forCardSection:(id)arg1 ;
-(BOOL)performCommand:(id)arg0 forCardSectionViewController:(id)arg1 ;
-(NSInteger)preferredPunchoutIndexForCardSectionViewController:(id)arg0 ;
-(NSUInteger)displayPriorityForCard:(id)arg0 ;
-(id)_cardViewControllerForCardSection:(id)arg0 ;
-(id)_createCardViewControllerForCard:(id)arg0 ;
-(id)cardViewControllerForCard:(id)arg0 ;
-(id)customViewControllerForCardSection:(id)arg0 ;
-(id)init;
-(struct CGSize )boundingSizeForCardSectionViewController:(id)arg0 ;
-(void)cardSectionView:(id)arg0 willProcessEngagementFeedback:(id)arg1 ;
-(void)cardSectionViewController:(id)arg0 didSelectPreferredPunchoutIndex:(NSInteger)arg1 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardViewController:(id)arg0 preferredContentSizeDidChange:(struct CGSize )arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg0 ;
-(void)presentViewController:(id)arg0 forCardSectionViewController:(id)arg1 ;
-(void)presentation:(id)arg0 didApplyCardSectionViewSource:(id)arg1 toCardViewController:(id)arg2 ;
-(void)userDidEngageCardSection:(id)arg0 withEngagementFeedback:(id)arg1 ;


@end


#endif