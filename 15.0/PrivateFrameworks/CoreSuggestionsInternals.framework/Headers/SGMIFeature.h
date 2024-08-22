// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIFEATURE_H
#define SGMIFEATURE_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SGMIFeature : NSObject

@property (readonly, nonatomic) NSInteger featureName; // ivar: _featureName
@property (readonly, nonatomic) NSInteger featureSource; // ivar: _featureSource
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) NSArray *numberArrayValue; // ivar: _numberArrayValue
@property (readonly, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, nonatomic) NSArray *stringArrayValue; // ivar: _stringArrayValue
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(NSInteger)featureSourceForName:(NSInteger)arg0 ;
+(NSInteger)featureTypeForName:(NSInteger)arg0 ;
+(id)allFeatureNames;
+(id)allFeaturePrettyNames;
+(id)prettyName:(NSInteger)arg0 ;
+(id)prettyNamesReverseMapping;
-(id)description;
-(id)initWithFeatureName:(NSInteger)arg0 ;
-(id)initWithFeatureName:(NSInteger)arg0 numberArrayValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 numberValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 stringArrayValue:(id)arg1 ;
-(id)initWithFeatureName:(NSInteger)arg0 stringValue:(id)arg1 ;


@end


#endif