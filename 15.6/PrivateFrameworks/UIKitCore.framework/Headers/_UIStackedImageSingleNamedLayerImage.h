// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTACKEDIMAGESINGLENAMEDLAYERIMAGE_H
#define _UISTACKEDIMAGESINGLENAMEDLAYERIMAGE_H

@class NSString;
@protocol UINamedLayerImage, UINamedLayerContentProvider;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage>



@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) NSObject<UINamedLayerContentProvider> *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *imageObj; // ivar: _imageObj
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly) Class superclass;




@end


#endif