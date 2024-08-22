// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTSTATUSCELL_H
#define CKTRANSCRIPTSTATUSCELL_H

@class NSAttributedString, UIButton;


#import "CKTranscriptLabelCell.h"

@interface CKTranscriptStatusCell : CKTranscriptLabelCell

@property (nonatomic) BOOL allowsButtonCharge; // ivar: _allowsButtonCharge
@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (nonatomic) char buttonAlignmentRelativeToContent; // ivar: _buttonAlignmentRelativeToContent
@property (nonatomic) CGFloat prevBalloonWidth; // ivar: _prevBalloonWidth
@property (readonly, nonatomic) BOOL shouldHideDuringDarkFSM;
@property (retain, nonatomic) UIButton *statusButton; // ivar: _statusButton


+(void)transitionFromView:(id)arg0 toView:(id)arg1 duration:(CGFloat)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
// +(void)zoomAnimation:(id)arg0 completion:(unk)arg1  ;
-(struct UIEdgeInsets )buttonAlignmentInsets;
-(void)_updateChargeOnStatusButton;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)performRemoval:(id)arg0 ;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg0 ;


@end


#endif