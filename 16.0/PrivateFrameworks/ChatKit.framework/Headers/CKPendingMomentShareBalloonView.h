// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPENDINGMOMENTSHAREBALLOONVIEW_H
#define CKPENDINGMOMENTSHAREBALLOONVIEW_H



#import "CKAttachmentBalloonView.h"

@interface CKPendingMomentShareBalloonView : CKAttachmentBalloonView



-(BOOL)canUseOpaqueMask;
-(char)balloonStyle;
-(char)color;
-(id)attachmentView;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(void)prepareForDisplay;


@end


#endif