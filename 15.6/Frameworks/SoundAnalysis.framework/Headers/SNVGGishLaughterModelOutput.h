// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNVGGISHLAUGHTERMODELOUTPUT_H
#define SNVGGISHLAUGHTERMODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishLaughterModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *output1; // ivar: _output1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithOutput1:(id)arg0 ;


@end


#endif