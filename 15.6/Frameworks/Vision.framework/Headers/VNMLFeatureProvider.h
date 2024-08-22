// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNMLFEATUREPROVIDER_H
#define VNMLFEATUREPROVIDER_H

@class NSString, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "VNSceneprint.h"

@interface VNMLFeatureProvider : NSObject <MLFeatureProvider>

 {
    NSString *_imageInputKey;
    *__CVBuffer _buffer;
    VNSceneprint *_scenePrint;
    *NSInteger _scenePrintMLMultiArrayDataType;
    id<MLFeatureProvider> *_featureProvider;
}


@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)featureValueFromScenePrint:(id)arg0 dataType:(NSInteger)arg1 ;
-(id)initWithBuffer:(struct __CVBuffer *)arg0 forKey:(id)arg1 originalFeatureProvider:(id)arg2 ;
-(id)initWithScenePrint:(id)arg0 dataType:(*NSInteger)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3 ;
-(void)dealloc;


@end


#endif