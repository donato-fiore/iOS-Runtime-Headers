// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGEXTRACTIONMODELCOREMLFEATUREWRAPPER_H
#define SGEXTRACTIONMODELCOREMLFEATUREWRAPPER_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SGExtractionModelCoreMLFeatureWrapper : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSDictionary *featureDict; // ivar: _featureDict
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithFeatureDict:(id)arg0 ;
-(id)initWithFeatureProvider:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif