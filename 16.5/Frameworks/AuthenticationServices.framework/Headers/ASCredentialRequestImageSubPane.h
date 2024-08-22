// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTIMAGESUBPANE_H
#define ASCREDENTIALREQUESTIMAGESUBPANE_H

@class UIImageView;


#import "ASCredentialRequestSubPane.h"

@interface ASCredentialRequestImageSubPane : ASCredentialRequestSubPane

@property (readonly, nonatomic) NSInteger imageStyle; // ivar: _imageStyle
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


+(id)_appIconViewWithImage:(id)arg0 ;
+(id)_customIconViewWithImage:(id)arg0 ;
+(id)_imageViewWithImage:(id)arg0 imageStyle:(NSInteger)arg1 ;
+(id)_systemIconViewWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 imageStyle:(NSInteger)arg1 ;
-(void)addToStackView:(id)arg0 withCustomSpacingAfter:(CGFloat)arg1 context:(id)arg2 ;
-(void)setImage:(id)arg0 ;


@end


#endif