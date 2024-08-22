// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HTUITAGGEDCOLOR_H
#define HTUITAGGEDCOLOR_H

@class UIColor, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HTUITaggedColor : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizedName;


+(BOOL)supportsSecureCoding;
+(id)color:(id)arg0 identifier:(id)arg1 ;
+(id)makeFromData:(id)arg0 ;
+(id)makeFromData:(id)arg0 withOpacity:(CGFloat)arg1 ;
+(id)userPickableColors;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif