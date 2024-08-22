// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDDOCKITEM_H
#define UIKEYBOARDDOCKITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIKeyboardDockItemButton.h"
#import "UIImage.h"
#import "UILongPressGestureRecognizer.h"
#import "UIPanGestureRecognizer.h"

@interface UIKeyboardDockItem : NSObject

@property (nonatomic) BOOL active;
@property (retain, nonatomic) UIKeyboardDockItemButton *button; // ivar: _button
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) CGPoint touchDownPoint; // ivar: _touchDownPoint
@property (readonly, nonatomic) UIKeyboardDockItemButton *view;


+(id)_darkStyleGlyphColor;
+(id)_standardGlyphColor;
-(id)imageWithRenderConfig:(id)arg0 ;
-(id)initWithImageName:(id)arg0 identifier:(id)arg1 ;


@end


#endif