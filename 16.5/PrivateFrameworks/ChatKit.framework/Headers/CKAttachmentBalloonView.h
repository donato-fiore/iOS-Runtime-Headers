// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATTACHMENTBALLOONVIEW_H
#define CKATTACHMENTBALLOONVIEW_H

@class LPLinkView, NSString, UIView;
@protocol LPLinkViewDelegate;


#import "CKImageBalloonView.h"
#import "CKMediaObject.h"

@interface CKAttachmentBalloonView : CKImageBalloonView <LPLinkViewDelegate>



@property (retain, nonatomic) LPLinkView *attachmentView; // ivar: _attachmentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly) Class superclass;
@property (readonly) CGRect uncroppedSourceFrame;
@property (readonly) UIView *uncroppedSourceView;


+(id)_linkViewThumbnailFromMediaObject:(id)arg0 ;
+(id)linkMetadataFromMediaObject:(id)arg0 ;
-(BOOL)_isFromMe;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayColor;
-(id)overlayImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_setProgressWithMediaObject:(id)arg0 ;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)richIconDidChange:(id)arg0 ;
-(void)transferUpdated:(id)arg0 ;


@end


#endif