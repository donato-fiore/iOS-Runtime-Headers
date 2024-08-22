// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCWEBURLRESOLUTIONENDPOINTCONNECTION_H
#define FCWEBURLRESOLUTIONENDPOINTCONNECTION_H

@class NBHashBucketer, NSURL, NBURLCanonicalizer, NBURLHasher, NFLazy;
@protocol FCWebURLResolutionEndpointConnection, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>


@interface FCWebURLResolutionEndpointConnection : NSObject <FCWebURLResolutionEndpointConnection>



@property (readonly, nonatomic) NBHashBucketer *bucketer; // ivar: _bucketer
@property (readonly, copy, nonatomic) NSURL *cachesDirectoryURL; // ivar: _cachesDirectoryURL
@property (readonly, nonatomic) NBURLCanonicalizer *canonicalizer; // ivar: _canonicalizer
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, nonatomic) NBURLHasher *hasher; // ivar: _hasher
@property (readonly, nonatomic) NFLazy *lazyStoreFrontIDPromise; // ivar: _lazyStoreFrontIDPromise


+(id)_bloomFilterScheduler;
+(id)_sharedProxyingScheduler;
-(id)_articleIDWithHash:(id)arg0 lists:(id)arg1 storeFrontID:(id)arg2 ;
-(id)_assetHost;
-(id)_bloomFilterError;
-(id)_fetchBloomFilterInfoPromiseWithQualityOfService:(NSInteger)arg0 ;
-(id)_fetchConfigIfNeededPromiseWithCoreConfiguration:(id)arg0 qualityOfService:(NSInteger)arg1 ;
-(id)_fetchConfigPromiseWithQualityOfService:(NSInteger)arg0 ;
-(id)_fetchCoreConfigurationIfNeededPromiseWithQualityOfService:(NSInteger)arg0 ;
-(id)_fetchListsPromiseWithConfig:(id)arg0 coreConfiguration:(id)arg1 hash:(id)arg2 qualityOfService:(NSInteger)arg3 ;
-(id)_hashOfURLWithWebURL:(id)arg0 config:(id)arg1 ;
-(id)init;
-(id)initWithConfigurationManager:(id)arg0 cachesDirectoryURL:(id)arg1 ;
-(void)_fetchListsPromiseThroughProxy:(BOOL)arg0 withResourceURL:(id)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchWebURLBloomFilterInfoWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;
-(void)resolveWebURL:(id)arg0 withQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif