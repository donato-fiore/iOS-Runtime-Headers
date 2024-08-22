// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTLABELCELL_H
#define CKTRANSCRIPTLABELCELL_H

@class NSAttributedString, NSString, UILabel;
@protocol CKTranscriptCollectionViewCellProtocol;


#import "CKTranscriptCell.h"

@interface CKTranscriptLabelCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsContactImageLayout; // ivar: _wantsContactImageLayout
@property (nonatomic) BOOL wantsOffsetForReplyLine; // ivar: _wantsOffsetForReplyLine


+(id)reuseIdentifier;
-(BOOL)hidesCheckmark;
-(id)animationWithKeyPath:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentAlignmentRect;
-(void)_fadeInLabelAtStartTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(id)arg0 ;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg0 ;


@end


#endif