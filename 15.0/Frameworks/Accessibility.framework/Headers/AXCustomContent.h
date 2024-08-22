// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXCUSTOMCONTENT_H
#define AXCUSTOMCONTENT_H

@class NSAttributedString, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXCustomContent : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSAttributedString *attributedLabel; // ivar: _attributedLabel
@property (copy, nonatomic) NSAttributedString *attributedValue; // ivar: _attributedValue
@property (nonatomic) NSUInteger importance; // ivar: _importance
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)customContentWithAttributedLabel:(id)arg0 attributedValue:(id)arg1 ;
+(id)customContentWithLabel:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif