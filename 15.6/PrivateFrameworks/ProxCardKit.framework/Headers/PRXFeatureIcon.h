// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXFEATUREICON_H
#define PRXFEATUREICON_H

@class UIView, UIColor, NSString;

#import <Foundation/Foundation.h>


@interface PRXFeatureIcon : NSObject

@property (readonly, nonatomic) UIView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIColor *platterColor; // ivar: _platterColor
@property (nonatomic) CGFloat platterCornerRadius; // ivar: _platterCornerRadius
@property (nonatomic) CGFloat platterSize; // ivar: _platterSize
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName


-(id)initWithImage:(id)arg0 ;
-(id)initWithImageView:(id)arg0 ;
-(id)initWithSystemImageNamed:(id)arg0 ;
-(id)makeImageView;


@end


#endif