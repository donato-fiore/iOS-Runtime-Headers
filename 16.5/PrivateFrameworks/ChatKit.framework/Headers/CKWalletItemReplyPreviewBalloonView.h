// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKWALLETITEMREPLYPREVIEWBALLOONVIEW_H
#define CKWALLETITEMREPLYPREVIEWBALLOONVIEW_H

@class LPLinkView;


#import "CKColoredBalloonView.h"
#import "CKMediaObject.h"

@interface CKWalletItemReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif