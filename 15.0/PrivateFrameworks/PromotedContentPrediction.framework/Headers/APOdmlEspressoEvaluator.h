// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLESPRESSOEVALUATOR_H
#define APODMLESPRESSOEVALUATOR_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "APOdmlRecipe.h"

@interface APOdmlEspressoEvaluator : NSObject

@property (readonly, nonatomic) NSURL *netURL; // ivar: _netURL
@property (readonly, nonatomic) APOdmlRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) NSUInteger trainingDataRowCount;
@property (readonly, nonatomic) NSArray *trainingRows; // ivar: _trainingRows


-(id)evaluate:(*id)arg0 ;
-(id)initWithRows:(id)arg0 recipe:(id)arg1 netURL:(id)arg2 ;


@end


#endif