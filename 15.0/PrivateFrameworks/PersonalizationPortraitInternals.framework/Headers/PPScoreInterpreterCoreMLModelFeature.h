// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSCOREINTERPRETERCOREMLMODELFEATURE_H
#define PPSCOREINTERPRETERCOREMLMODELFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPScoreInterpreterCoreMLModelFeature : NSObject

@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) NSUInteger multiArraySize; // ivar: _multiArraySize


-(id)init;
-(id)initWithFeatureName:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 multiArraySize:(NSUInteger)arg1 ;


@end


#endif