// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSUGGESTEDUSER_H
#define SFSUGGESTEDUSER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFSuggestedUser : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) NSInteger usageFrequency; // ivar: _usageFrequency
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)suggestedUserWithValue:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif