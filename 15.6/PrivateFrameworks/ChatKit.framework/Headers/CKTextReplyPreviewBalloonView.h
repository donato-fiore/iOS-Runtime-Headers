// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTREPLYPREVIEWBALLOONVIEW_H
#define CKTEXTREPLYPREVIEWBALLOONVIEW_H



#import "CKTextBalloonView.h"

@interface CKTextReplyPreviewBalloonView : CKTextBalloonView

@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL shouldUseFilledBalloonStyle; // ivar: _shouldUseFilledBalloonStyle


-(BOOL)hasBackground;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 isSingleLine:(*BOOL)arg2 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIEdgeInsets )targetTextContainerInsets;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif