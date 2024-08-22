// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCADAMID_H
#define ASCADAMID_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger int64value;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
+(id)invalidAdamID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInt64:(NSInteger)arg0 ;
-(id)initWithNumberValue:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif