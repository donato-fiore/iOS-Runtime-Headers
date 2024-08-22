// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETONATEDATTACHMENTBALLOONVIEW_H
#define CKDETONATEDATTACHMENTBALLOONVIEW_H



#import "CKColoredBalloonView.h"
#import "CKDetonatedAttachmentView.h"

@interface CKDetonatedAttachmentBalloonView : CKColoredBalloonView

@property (retain, nonatomic) CKDetonatedAttachmentView *attachmentView; // ivar: _attachmentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)layoutSubviews;


@end


#endif