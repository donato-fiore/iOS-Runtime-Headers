// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMEDIAAPIURLMAPPINGPROVIDER_H
#define ICMEDIAAPIURLMAPPINGPROVIDER_H


#import <Foundation/Foundation.h>


@interface ICMediaAPIURLMappingProvider : NSObject



+(id)sharedProvider;
-(id)_cacheFileURL;
-(id)_loadCacheDictionary;
-(id)getCurrentURLMappingSet;
-(void)_saveCachedResponsePayload:(id)arg0 eTag:(id)arg1 ;
-(void)clearCachedURLMappings;
-(void)setCurrentURLMappingSet:(id)arg0 ;
-(void)updateURLMappingsWithCompletion:(id)arg0 ;


@end


#endif