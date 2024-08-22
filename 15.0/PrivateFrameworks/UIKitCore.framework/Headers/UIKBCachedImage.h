// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBCACHEDIMAGE_H
#define UIKBCACHEDIMAGE_H



#import "UIImage.h"
#import "UIColor.h"

@interface UIKBCachedImage : UIImage

@property (retain, nonatomic) UIColor *formatColor;
@property (readonly, nonatomic) BOOL hasFormatColor;


+(BOOL)supportsSecureCoding;


@end


#endif