// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKIMAGEREPLYPREVIEWBALLOONVIEW_H
#define CKIMAGEREPLYPREVIEWBALLOONVIEW_H



#import "CKImageBalloonView.h"

@interface CKImageReplyPreviewBalloonView : CKImageBalloonView



-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif