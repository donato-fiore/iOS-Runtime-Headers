// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTEIMAGE_H
#define DIATTRIBUTEIMAGE_H

@class NSData, NSString;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeImage : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) NSData *currentValue; // ivar: currentValue
@property (copy, nonatomic) NSString *encoding; // ivar: _encoding
@property (nonatomic) NSUInteger format; // ivar: _format
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif