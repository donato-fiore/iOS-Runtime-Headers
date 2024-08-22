// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNHALLUCINATORINPUTPROVIDER_H
#define SNHALLUCINATORINPUTPROVIDER_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNHallucinatorInputProvider : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *feature; // ivar: _feature
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *tokenGroup; // ivar: _tokenGroup


-(id)featureValueForName:(id)arg0 ;


@end


#endif