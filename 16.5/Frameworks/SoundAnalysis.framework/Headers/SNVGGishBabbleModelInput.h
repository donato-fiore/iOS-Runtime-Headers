// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNVGGISHBABBLEMODELINPUT_H
#define SNVGGISHBABBLEMODELINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishBabbleModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input1; // ivar: _input1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput1:(id)arg0 ;


@end


#endif