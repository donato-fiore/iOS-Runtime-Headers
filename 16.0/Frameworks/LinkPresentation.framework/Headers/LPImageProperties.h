// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPIMAGEPROPERTIES_H
#define LPIMAGEPROPERTIES_H

@class NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LPImageProperties : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (retain, nonatomic) UIColor *overlaidTextColor; // ivar: _overlaidTextColor
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif