// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSBLOOMFILTEREXTRACTOR_H
#define BCSBLOOMFILTEREXTRACTOR_H

@class NSString;
@protocol BCSBloomFilterExtractorProtocol;

#import <Foundation/Foundation.h>


@interface BCSBloomFilterExtractor : NSObject <BCSBloomFilterExtractorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)extractShardsURLsFromBloomFilterURL:(id)arg0 completion:(id)arg1 ;
-(void)extractShardsURLsFromFilterShardURL:(id)arg0 domainShardURL:(id)arg1 completion:(id)arg2 ;


@end


#endif