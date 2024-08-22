// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPASSBALLOONVIEW_H
#define CKPASSBALLOONVIEW_H

@class LPWebLinkPresentationProperties;


#import "CKLinkBalloonView.h"

@interface CKPassBalloonView : CKLinkBalloonView {
    BOOL _isIrisAsset;
}


@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties; // ivar: _presentationProperties


-(BOOL)isIrisAsset;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setIsIrisAsset:(BOOL)arg0 ;


@end


#endif