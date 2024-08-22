// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICKPAUDIOPLAYBACKCARDSECTIONVIEWCONTROLLER_H
#define SUICKPAUDIOPLAYBACKCARDSECTIONVIEWCONTROLLER_H

@class SFAudioPlaybackCardSection, NSString, UIView<SearchUICardSectionViewUpdatable>;
@protocol SFFeedbackListener, CRKEventResponding;


#import "SUICKPInteractiveCardSectionViewController.h"

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>



@property (retain, nonatomic) SFAudioPlaybackCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<SearchUICardSectionViewUpdatable> *view;


-(void)_performCommands:(id)arg0 applyingUserInfo:(id)arg1 ;
-(void)cardEventDidOccur:(NSUInteger)arg0 withIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)didEngageCardSection:(id)arg0 ;


@end


#endif