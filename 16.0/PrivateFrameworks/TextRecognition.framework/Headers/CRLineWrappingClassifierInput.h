// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEWRAPPINGCLASSIFIERINPUT_H
#define CRLINEWRAPPINGCLASSIFIERINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CRLineWrappingClassifierInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *features; // ivar: _features


-(id)featureValueForName:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;


@end


#endif