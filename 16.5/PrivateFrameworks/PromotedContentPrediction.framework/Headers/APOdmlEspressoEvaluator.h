// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLESPRESSOEVALUATOR_H
#define APODMLESPRESSOEVALUATOR_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "APOdmlTrainingSetBuilder.h"
#import "APOdmlRecipe.h"

@interface APOdmlEspressoEvaluator : NSObject

@property (readonly, nonatomic) APOdmlTrainingSetBuilder *builder; // ivar: _builder
@property (readonly, nonatomic) NSURL *netURL; // ivar: _netURL
@property (readonly, nonatomic) APOdmlRecipe *recipe; // ivar: _recipe
@property (nonatomic) NSUInteger trainingSetSize; // ivar: _trainingSetSize


-(BOOL)_setError:(*id)arg0 errorCode:(NSInteger)arg1 ;
-(id)_computeModelDeltas:(id)arg0 weightsAfter:(id)arg1 error:(*id)arg2 ;
-(id)_evaluate:(id)arg0 error:(*id)arg1 ;
-(id)_generateMetrics:(id)arg0 postTrainingMetrics:(id)arg1 tapAndImpressionMetrics:(id)arg2 deltaPttrMetrics:(id)arg3 ;
-(id)evaluate:(*id)arg0 ;
-(id)initWithTrainingRowBuilder:(id)arg0 recipe:(id)arg1 netURL:(id)arg2 ;


@end


#endif