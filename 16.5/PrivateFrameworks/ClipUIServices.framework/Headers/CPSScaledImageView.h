// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSSCALEDIMAGEVIEW_H
#define CPSSCALEDIMAGEVIEW_H

@class UIImageView, NSString;



@interface CPSScaledImageView : UIImageView {
    CGSize _scaledImageSize;
    BOOL _needsUpdateScaledImageSize;
}


@property (retain, nonatomic) NSString *textStyleForScaling; // ivar: _textStyleForScaling


-(struct CGSize )intrinsicContentSize;
-(void)invalidateIntrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif