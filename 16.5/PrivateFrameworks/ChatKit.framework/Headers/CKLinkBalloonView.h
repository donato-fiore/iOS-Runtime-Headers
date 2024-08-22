// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLINKBALLOONVIEW_H
#define CKLINKBALLOONVIEW_H

@class NSString, LPLinkView;
@protocol LPLinkViewDelegate;


#import "CKImageBalloonView.h"

@interface CKLinkBalloonView : CKImageBalloonView <LPLinkViewDelegate>

 {
    BOOL _isIrisAsset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (readonly) Class superclass;


-(BOOL)isIrisAsset;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_linkViewMetadataDidBecomeComplete:(id)arg0 ;
-(void)layoutSubviews;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setIsIrisAsset:(BOOL)arg0 ;


@end


#endif