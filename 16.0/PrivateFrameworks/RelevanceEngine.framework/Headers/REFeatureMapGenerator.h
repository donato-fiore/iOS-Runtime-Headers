// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFEATUREMAPGENERATOR_H
#define REFEATUREMAPGENERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface REFeatureMapGenerator : NSObject {
    NSMutableDictionary *_featureIndexMap;
}




-(id)createFeatureMap;
-(id)initWithFeatureList:(id)arg0 ;


@end


#endif