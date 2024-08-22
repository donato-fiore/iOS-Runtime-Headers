// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUIWINDOWDRAGGINGITEM_H
#define OFUIWINDOWDRAGGINGITEM_H

@class UIImageView, UIImage;
@protocol OFUIWindowDraggingPasteboard;

#import <Foundation/Foundation.h>


@interface OFUIWindowDraggingItem : NSObject

@property (nonatomic) CGFloat imageAspectRatio; // ivar: _imageAspectRatio
@property (nonatomic) CGRect imageContentsRect; // ivar: _imageContentsRect
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isReverting; // ivar: _isReverting
@property (retain, nonatomic) NSObject<OFUIWindowDraggingPasteboard> *object; // ivar: _object
@property (nonatomic) CGRect originalBounds; // ivar: _originalBounds
@property (retain, nonatomic) UIImage *originalImage; // ivar: _originalImage
@property (nonatomic) CGAffineTransform originalTransform; // ivar: _originalTransform
@property (retain, nonatomic) UIImage *placeHolderImage; // ivar: _placeHolderImage
@property (nonatomic) CGFloat rotation; // ivar: _rotation


-(id)init;
-(id)initWithObject:(id)arg0 image:(id)arg1 ;
-(void)dealloc;


@end


#endif