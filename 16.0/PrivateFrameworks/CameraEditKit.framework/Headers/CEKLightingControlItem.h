// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKLIGHTINGCONTROLITEM_H
#define CEKLIGHTINGCONTROLITEM_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface CEKLightingControlItem : NSObject

@property (readonly, nonatomic) UIImage *displayImage; // ivar: _displayImage
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) UIImage *displayOutlineImage; // ivar: _displayOutlineImage
@property (readonly, nonatomic) UIImage *displayShadowImage; // ivar: _displayShadowImage
@property (readonly, nonatomic) NSInteger lightingType; // ivar: _lightingType
@property (readonly, nonatomic) UIImage *selectionBackgroundImage; // ivar: _selectionBackgroundImage


+(id)_defaultOutlineImage;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif