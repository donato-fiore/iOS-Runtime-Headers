// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONSUBPANEIMAGE_H
#define AKAUTHORIZATIONSUBPANEIMAGE_H

@class UIImage, UIImageView, NSArray;


#import "AKAuthorizationSubPane.h"

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSArray *imageViewConstraints; // ivar: _imageViewConstraints


+(id)_imageViewWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)addToConstraints:(id)arg0 context:(id)arg1 ;
-(void)addToStackView:(id)arg0 context:(id)arg1 ;


@end


#endif