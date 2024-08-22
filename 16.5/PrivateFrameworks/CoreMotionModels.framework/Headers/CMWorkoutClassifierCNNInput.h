// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWORKOUTCLASSIFIERCNNINPUT_H
#define CMWORKOUTCLASSIFIERCNNINPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CMWorkoutClassifierCNNInput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *X__0; // ivar: _X__0
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithX__0:(id)arg0 ;


@end


#endif