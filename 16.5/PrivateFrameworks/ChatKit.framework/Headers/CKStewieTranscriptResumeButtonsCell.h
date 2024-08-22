// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTEWIETRANSCRIPTRESUMEBUTTONSCELL_H
#define CKSTEWIETRANSCRIPTRESUMEBUTTONSCELL_H

@class UIButton;


#import "CKTranscriptLabelCell.h"

@interface CKStewieTranscriptResumeButtonsCell : CKTranscriptLabelCell

@property (retain, nonatomic) UIButton *callEmergencyServicesButton; // ivar: _callEmergencyServicesButton
@property (nonatomic, getter=isShowingStewieTextButton) BOOL showStewieTextButton; // ivar: _showStewieTextButton
@property (retain, nonatomic) UIButton *textEmergencyServicesButton; // ivar: _textEmergencyServicesButton


+(CGFloat)heightForChatItem:(id)arg0 fittingSize:(struct CGSize )arg1 ;
+(id)_buttonWithSystemImageName:(id)arg0 titleString:(id)arg1 ;
+(id)_makeCallEmergencyServicesButton;
+(id)_makeTextEmergencyServicesButton;
+(void)_configureLabel:(id)arg0 ;
-(id)attributedButtonText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutLabelInAlignmentContentRect:(struct CGRect )arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)prepareForReuse;
-(void)touchUpInsideCallEmergencyServicesButton:(id)arg0 ;
-(void)touchUpInsideTextEmergencyServicesButton:(id)arg0 ;


@end


#endif