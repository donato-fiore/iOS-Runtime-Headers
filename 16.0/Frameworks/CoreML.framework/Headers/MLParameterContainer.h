// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPARAMETERCONTAINER_H
#define MLPARAMETERCONTAINER_H

@class NSMutableDictionary, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLParameterContainer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *currentParameterValues; // ivar: _currentParameterValues
@property (retain, nonatomic) NSDictionary *parameterDescriptions; // ivar: _parameterDescriptions
@property (retain, nonatomic) NSArray *parameterKeys; // ivar: _parameterKeys


+(BOOL)supportsSecureCoding;
+(id)parameterContainerFor:(id)arg0 descriptions:(id)arg1 ;
-(BOOL)setCurrentValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateParameterValue:(id)arg0 givenConstraint:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif