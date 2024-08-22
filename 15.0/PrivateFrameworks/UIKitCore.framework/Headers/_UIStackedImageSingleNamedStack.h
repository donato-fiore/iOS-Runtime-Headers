// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTACKEDIMAGESINGLENAMEDSTACK_H
#define _UISTACKEDIMAGESINGLENAMEDSTACK_H

@class NSString, NSArray;
@protocol UINamedLayerStack;

#import <Foundation/Foundation.h>

#import "_UIStackedImageSingleNamedLayerImage.h"

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly, nonatomic) *CGImage flattenedImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage; // ivar: _layerImage
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id *radiosityImage;
@property (readonly, nonatomic) CGSize radiosityImageScale;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;




@end


#endif