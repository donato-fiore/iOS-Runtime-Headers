// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREINTRODUCTIONEXPLANATIONVIEWCONTROLLER_H
#define PKPASSSHAREINTRODUCTIONEXPLANATIONVIEWCONTROLLER_H

@class PKSharedPassSharesController, NSString;
@protocol PKExplanationViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPassShareInitiationContext.h"
#import "PKPassSnapshotter.h"
#import "PKHeroCardExplainationHeaderView.h"

@interface PKPassShareIntroductionExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate>

 {
    PKSharedPassSharesController *_sharesController;
    PKPassShareInitiationContext *_context;
    id<PKPassShareIntroductionExplanationViewControllerDelegate> *_delegate;
    PKPassSnapshotter *_passSnapshotter;
    PKHeroCardExplainationHeaderView *_heroView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSharesController:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)_loadCardArt;
-(void)_showShareUI;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)loadView;


@end


#endif