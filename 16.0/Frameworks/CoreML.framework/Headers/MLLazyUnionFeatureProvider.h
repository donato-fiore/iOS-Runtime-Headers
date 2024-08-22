// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLLAZYUNIONFEATUREPROVIDER_H
#define MLLAZYUNIONFEATUREPROVIDER_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSObject<MLFeatureProvider> *first; // ivar: _first
@property (retain, nonatomic) NSObject<MLFeatureProvider> *second; // ivar: _second


-(id)featureValueForName:(id)arg0 ;
-(id)initWithFeaturesFrom:(id)arg0 addedToFeaturesFrom:(id)arg1 ;
-(id)unionFeatureProvider;


@end


#endif