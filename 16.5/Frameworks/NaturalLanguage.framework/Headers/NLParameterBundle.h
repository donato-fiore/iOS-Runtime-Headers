// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPARAMETERBUNDLE_H
#define NLPARAMETERBUNDLE_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLParameterBundle : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *parameterNames; // ivar: _parameterNames
@property (readonly, copy, nonatomic) NSDictionary *parameterValues; // ivar: _parameterValues
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
+(id)parameterBundleWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)parameterBundleWithParameters:(id)arg0 values:(id)arg1 metadata:(id)arg2 ;
-(BOOL)getContinuousParameterValueForName:(id)arg0 value:(*CGFloat)arg1 ;
-(BOOL)getIntegralParameterValueForName:(id)arg0 value:(*NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithParameters:(id)arg0 values:(id)arg1 metadata:(id)arg2 ;
-(id)parameterForName:(id)arg0 ;
-(id)parameterValueForName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif