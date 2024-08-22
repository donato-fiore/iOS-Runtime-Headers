// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHCDNDATAFETCHER_H
#define SHCDNDATAFETCHER_H

@class NSString;
@protocol SHDataFetcher;

#import <Foundation/Foundation.h>


@interface SHCDNDataFetcher : NSObject <SHDataFetcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasDownloadedClusterFile;
+(id)downloadedClusterDirectoryPath;
+(id)downloadedClusterFilePath;
-(BOOL)clearDataWithError:(*id)arg0 ;
-(BOOL)doesRequestEtag:(id)arg0 matchInResponse:(id)arg1 ;
-(id)endpointFromDate:(id)arg0 insights:(id)arg1 location:(id)arg2 ;
-(void)clusterDataForLocation:(id)arg0 date:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDataForCountryCode:(id)arg0 etag:(id)arg1 insights:(id)arg2 completion:(id)arg3 ;
-(void)fetchTargetingDataForCurrentStorefront:(id)arg0 cachedEtag:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif