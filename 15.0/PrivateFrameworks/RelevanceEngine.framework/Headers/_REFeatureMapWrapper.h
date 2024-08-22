// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REFEATUREMAPWRAPPER_H
#define _REFEATUREMAPWRAPPER_H

@class NSSet, NSString;
@protocol REMLFeatureProvider;

#import <Foundation/Foundation.h>

#import "REFeatureMap.h"

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider>

 {
    REFeatureMap *_featureMap;
}


@property (readonly, nonatomic) NSSet *allFeatures;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFeatureMap:(id)arg0 ;
-(id)valueForFeature:(id)arg0 ;


@end


#endif