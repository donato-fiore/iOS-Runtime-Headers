// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPERSONIMAGEVIEW_H
#define SFPERSONIMAGEVIEW_H

@class UIImageView;



@interface SFPersonImageView : UIImageView

@property (nonatomic) CGFloat highlightDarkeningAlpha; // ivar: _highlightDarkeningAlpha
@property (nonatomic) BOOL imageIsSquare; // ivar: _imageIsSquare


+(id)darkenImage:(id)arg0 toLevel:(CGFloat)arg1 ;
-(id)initWithImage:(id)arg0 isSquare:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;


@end


#endif