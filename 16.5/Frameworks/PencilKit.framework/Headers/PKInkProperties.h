// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINKPROPERTIES_H
#define PKINKPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PKInkProperties : NSObject



+(BOOL)bezierControlPoints:(struct ? )arg0 isEqual:(struct ? )arg1 ;
+(CGFloat)defaultValueForInput:(NSUInteger)arg0 ;
+(NSUInteger)functionTypeForBezierControlPoints:(struct ? )arg0 ;
+(NSUInteger)functionTypeForName:(id)arg0 ;
+(id)arrayForBezierControlPoints:(struct ? )arg0 ;
+(id)blendModeNames;
+(id)functionNames;
+(id)inkPropertyNames;
+(id)inkTypeNames;
+(id)inputMaskNames;
+(id)inputNames;
+(struct ? )controlPointsForFunctionType:(NSUInteger)arg0 ;
+(struct ? )rangeForInkProperty:(NSUInteger)arg0 ;
+(struct ? )rangeForInput:(NSUInteger)arg0 ;


@end


#endif