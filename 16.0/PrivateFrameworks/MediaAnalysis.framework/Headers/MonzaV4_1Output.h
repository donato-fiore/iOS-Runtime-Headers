// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MONZAV4_1OUTPUT_H
#define MONZAV4_1OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface MonzaV4_1Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *angle; // ivar: _angle
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithAngle:(id)arg0 ;


@end


#endif