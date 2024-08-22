// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESDEDISCOUPLOADER_H
#define DESDEDISCOUPLOADER_H


#import <Foundation/Foundation.h>

#import "DESRecipe.h"
#import "DESDediscoKey.h"

@interface DESDediscoUploader : NSObject {
    DESRecipe *_recipe;
}


@property (readonly, nonatomic) DESDediscoKey *key; // ivar: _key


+(BOOL)hasAllZeroData:(id)arg0 ;
+(BOOL)uploadViaDedisco:(id)arg0 jsonResult:(id)arg1 recipe:(id)arg2 bundleIdentifier:(id)arg3 submissionCount:(*unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)donateCategoricalMetadata:(id)arg0 dediscoMetadata:(id)arg1 recorder:(id)arg2 ;
-(BOOL)donateFedStatsMetrics:(id)arg0 dataKey:(id)arg1 dataTypeContent:(id)arg2 dediscoMetadata:(id)arg3 error:(*id)arg4 recorder:(id)arg5 ;
-(BOOL)donateMetrics:(id)arg0 dediscoMetadata:(id)arg1 recorder:(id)arg2 ;
-(BOOL)scaleData:(id)arg0 withScalingFactor:(CGFloat)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 recipe:(id)arg1 ;
-(unsigned int)donateResult:(id)arg0 dediscoMetadata:(id)arg1 recorder:(id)arg2 ;


@end


#endif