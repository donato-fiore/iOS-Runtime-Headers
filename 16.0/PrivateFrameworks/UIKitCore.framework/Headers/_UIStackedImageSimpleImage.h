// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTACKEDIMAGESIMPLEIMAGE_H
#define _UISTACKEDIMAGESIMPLEIMAGE_H

@class NSString;
@protocol UINamedLayerImage, UINamedLayerContentProvider;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage>



@property (nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, nonatomic) NSObject<UINamedLayerContentProvider> *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *imageObj; // ivar: _imageObj
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly) Class superclass;




@end


#endif