// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTWEBMODELICON_H
#define ICATTACHMENTWEBMODELICON_H

@class UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface ICAttachmentWebModelIcon : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL scaleImageToIconSize; // ivar: _scaleImageToIconSize
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(id)initWithFallbackURL:(id)arg0 withSize:(struct CGSize )arg1 ;
-(id)initWithImageURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 withSize:(struct CGSize )arg1 ;


@end


#endif