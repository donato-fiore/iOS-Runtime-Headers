// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWWIZARDSUGGESTEDPHRASEVIEW_H
#define WFWORKFLOWWIZARDSUGGESTEDPHRASEVIEW_H

@class UIView, UILabel, NSString;
@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;



@interface WFWorkflowWizardSuggestedPhraseView : UIView

@property (weak, nonatomic) NSObject<WFWorkflowWizardSuggestedPhraseViewDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (readonly, copy, nonatomic) NSString *suggestedPhrase; // ivar: _suggestedPhrase


-(id)initWithSuggestedPhrase:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)fadeOutHighlight;
-(void)highlight;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)unhighlight;


@end


#endif