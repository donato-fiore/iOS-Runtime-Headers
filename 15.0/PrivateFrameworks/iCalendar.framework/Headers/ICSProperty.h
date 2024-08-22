// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSPROPERTY_H
#define ICSPROPERTY_H

@class NSMutableDictionary;
@protocol NSSecureCoding, ICSWriting;

#import <Foundation/Foundation.h>


@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting>

 {
    NSMutableDictionary *_parameters;
    NSUInteger _type;
    id *_value;
}




+(BOOL)supportsSecureCoding;
-(BOOL)alwaysHasParametersToSerialize;
-(BOOL)isMultiValued;
-(BOOL)shouldObscureValue;
-(NSUInteger)type;
-(id)ICSStringWithOptions:(NSUInteger)arg0 ;
-(id)allParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 type:(NSUInteger)arg1 ;
-(id)parameterValueForName:(id)arg0 ;
-(id)parameters;
-(id)parametersToIncludeForChecksumVersion:(int)arg0 ;
-(id)parametersToObscure;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg0 ;
-(id)propertiesToObscure;
-(id)stringValue;
-(id)value;
-(void)ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 additionalParameters:(id)arg2 ;
-(void)_appendDateTimeInDate:(id)arg0 asUTCToResult:(id)arg1 ;
-(void)_setParsedValues:(id)arg0 type:(NSUInteger)arg1 ;
-(void)addParameter:(id)arg0 withRawValue:(id)arg1 options:(NSUInteger)arg2 ;
-(void)addParametersFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeParameterValueForName:(id)arg0 ;
-(void)setParameterValue:(id)arg0 forName:(id)arg1 ;
-(void)setParameters:(id)arg0 ;
-(void)setValue:(id)arg0 type:(NSUInteger)arg1 ;
-(void)setValueAsProperty:(id)arg0 withRawValue:(char *)arg1 options:(NSUInteger)arg2 ;


@end


#endif