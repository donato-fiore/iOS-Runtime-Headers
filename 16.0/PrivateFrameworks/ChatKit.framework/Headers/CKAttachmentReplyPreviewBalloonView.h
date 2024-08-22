// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKATTACHMENTREPLYPREVIEWBALLOONVIEW_H
#define CKATTACHMENTREPLYPREVIEWBALLOONVIEW_H

@class UILabel;


#import "CKColoredBalloonView.h"
#import "CKMediaObject.h"

@interface CKAttachmentReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)attachmentTitleForMediaObject:(id)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;


@end


#endif