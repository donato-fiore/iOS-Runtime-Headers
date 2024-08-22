// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXSCOREINTERPRETERCOREMLMODELFEATURE_H
#define _ATXSCOREINTERPRETERCOREMLMODELFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ATXScoreInterpreterCoreMLModelFeature : NSObject

@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) NSUInteger multiArraySize; // ivar: _multiArraySize


-(id)init;
-(id)initWithFeatureName:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 multiArraySize:(NSUInteger)arg1 ;


@end


#endif