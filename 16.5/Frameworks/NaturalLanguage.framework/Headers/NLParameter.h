// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPARAMETER_H
#define NLPARAMETER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLParameter : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) CGFloat minimumValue; // ivar: _minimumValue
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger parameterType; // ivar: _parameterType


+(BOOL)supportsSecureCoding;
+(id)parameterWithName:(id)arg0 type:(NSInteger)arg1 minimumValue:(CGFloat)arg2 maximumValue:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_hyperTuneDictionary;
-(id)_initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_shortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 minimumValue:(CGFloat)arg2 maximumValue:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif