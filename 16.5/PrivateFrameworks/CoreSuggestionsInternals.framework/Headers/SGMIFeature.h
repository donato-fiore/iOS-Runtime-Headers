// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIFEATURE_H
#define SGMIFEATURE_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SGMIFeature : NSObject

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) NSInteger featureName; // ivar: _featureName
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) int intValue;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, nonatomic) NSArray *numberArrayValue; // ivar: _numberArrayValue
@property (readonly, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, nonatomic) NSArray *stringArrayValue; // ivar: _stringArrayValue
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(NSInteger)featureTypeForName:(NSInteger)arg0 ;
+(id)allFeatureNames;
+(id)allFeaturePrettyNames;
+(id)prettyName:(NSInteger)arg0 ;
+(id)prettyNamesReverseMapping;
+(id)submodeledFeatures;
-(id)description;
-(id)initWithFeatureName:(NSInteger)arg0 ;
-(id)initWithFeatureName:(NSInteger)arg0 numberArrayValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 numberValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 stringArrayValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 stringValue:(id)arg1 ;
-(id)stringArrayRepresentation;


@end


#endif