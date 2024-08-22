// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMISALIENCYMODELFEATUREPROVIDER_H
#define SGMISALIENCYMODELFEATUREPROVIDER_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SGMISaliencyModelFeatureProvider : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *data; // ivar: _data
@property (retain, nonatomic) NSSet *featureNames; // ivar: _featureNames


-(id)featureValueForName:(id)arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif