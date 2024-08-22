// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPPREDICTORASSETMAPPING_H
#define ATXAPPPREDICTORASSETMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary *_consumerSubTypeAssetMappings;
}




+(id)assetMappingWithCachedAssets;
+(id)getFullCachePathWithBaseCachePath:(id)arg0 cacheFileBaseName:(id)arg1 subScoreName:(id)arg2 ;
+(id)sharedInstanceWithMobileAssets;
-(id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg0 ;
-(id)getAtxToolDescription;
-(id)getFullCachePathWithBaseCachePath:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg0 ;
-(id)init;
-(id)initWithUseMobileAssets:(BOOL)arg0 ;


@end


#endif