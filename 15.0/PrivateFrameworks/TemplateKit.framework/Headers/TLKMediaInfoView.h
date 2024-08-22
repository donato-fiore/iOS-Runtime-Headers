// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKMEDIAINFOVIEW_H
#define TLKMEDIAINFOVIEW_H

@class NSArray;


#import "TLKView.h"
#import "TLKContentsContainerView.h"
#import "TLKImage.h"
#import "TLKImageView.h"

@interface TLKMediaInfoView : TLKView

@property (retain, nonatomic) NSArray *contents; // ivar: _contents
@property (retain, nonatomic) TLKContentsContainerView *contentsContainer; // ivar: _contentsContainer
@property (retain, nonatomic) TLKImage *image; // ivar: _image
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView


-(id)detailLabelStrings;
-(id)setupContentView;
-(id)titleLabelStrings;
-(void)observedPropertiesChanged;


@end


#endif