// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYHUDITEM_H
#define UIACCESSIBILITYHUDITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIImage.h"

@interface UIAccessibilityHUDItem : NSObject <NSCopying>



@property (nonatomic) NSInteger customUserInterfaceStyle; // ivar: _customUserInterfaceStyle
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) BOOL disabledAppearance; // ivar: _disabledAppearance
@property (nonatomic) BOOL flattenImage; // ivar: _flattenImage
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) UIEdgeInsets imageInsets; // ivar: _imageInsets
@property (nonatomic) BOOL scaleImage; // ivar: _scaleImage
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)HUDItemForBarButtonItem:(id)arg0 atPoint:(struct CGPoint )arg1 inView:(id)arg2 isBackButton:(BOOL)arg3 ;
+(id)HUDItemForTabBarItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCustomView:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageInsets:(struct UIEdgeInsets )arg2 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageInsets:(struct UIEdgeInsets )arg2 scaleImage:(BOOL)arg3 ;


@end


#endif