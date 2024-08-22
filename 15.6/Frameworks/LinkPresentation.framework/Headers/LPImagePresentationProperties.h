// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPIMAGEPRESENTATIONPROPERTIES_H
#define LPIMAGEPRESENTATIONPROPERTIES_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface LPImagePresentationProperties : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger filter; // ivar: _filter
@property (retain, nonatomic) UIColor *maskColor; // ivar: _maskColor
@property (nonatomic) BOOL requireFixedSize; // ivar: _requireFixedSize
@property (nonatomic) NSInteger scalingMode; // ivar: _scalingMode
@property (nonatomic) BOOL shouldApplyBackground; // ivar: _shouldApplyBackground


-(id)init;


@end


#endif