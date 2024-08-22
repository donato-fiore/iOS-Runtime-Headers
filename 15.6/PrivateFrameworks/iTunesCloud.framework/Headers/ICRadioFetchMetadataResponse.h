// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRADIOFETCHMETADATARESPONSE_H
#define ICRADIOFETCHMETADATARESPONSE_H

@class NSArray;


#import "ICRadioResponse.h"

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (readonly, copy, nonatomic) NSArray *allStorePlatformMetadata;


-(id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg0 ;
-(id)storePlatformMetadataForStoreAdamID:(NSInteger)arg0 ;


@end


#endif