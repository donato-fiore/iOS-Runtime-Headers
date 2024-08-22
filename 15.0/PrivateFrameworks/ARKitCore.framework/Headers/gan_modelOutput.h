// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GAN_MODELOUTPUT_H
#define GAN_MODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface gan_modelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *output; // ivar: _output


-(id)featureValueForName:(id)arg0 ;
-(id)initWithOutput:(id)arg0 ;


@end


#endif