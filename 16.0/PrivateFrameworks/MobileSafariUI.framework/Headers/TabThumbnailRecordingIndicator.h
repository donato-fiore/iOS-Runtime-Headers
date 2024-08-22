// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABTHUMBNAILRECORDINGINDICATOR_H
#define TABTHUMBNAILRECORDINGINDICATOR_H

@class UIView, UIImageView;



@interface TabThumbnailRecordingIndicator : UIView {
    UIImageView *_imageView;
}


@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif