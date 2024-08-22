// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILABELCONFIGURATIONINTERNAL_H
#define _UILABELCONFIGURATIONINTERNAL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UILabelConfigurationInternal : NSObject <NSCopying, NSSecureCoding>

 {
    CGFloat _screenScale;
    CGFloat _lineSpacing;
    UIColor *_disabledTextColor;
    ? _configurationFlags;
    BOOL __hasResolvedLabelTextAlignmentMirrored;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif