// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REACCESSORYDESCRIPTION_H
#define REACCESSORYDESCRIPTION_H

@class UIColor, CLKTextProvider;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface REAccessoryDescription : NSObject <NSCopying, NSCoding>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif