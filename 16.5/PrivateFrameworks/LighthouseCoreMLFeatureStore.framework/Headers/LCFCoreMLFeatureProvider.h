// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFCOREMLFEATUREPROVIDER_H
#define LCFCOREMLFEATUREPROVIDER_H

@class NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface LCFCoreMLFeatureProvider : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames; // ivar: _featureNames
@property (readonly, nonatomic) NSDictionary *featureValues; // ivar: _featureValues


-(id)featureValueForName:(id)arg0 ;
-(id)init:(id)arg0 ;


@end


#endif