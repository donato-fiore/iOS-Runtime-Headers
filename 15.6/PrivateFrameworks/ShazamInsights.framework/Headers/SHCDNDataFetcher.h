// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCDNDATAFETCHER_H
#define SHCDNDATAFETCHER_H

@class NSString;
@protocol SHDataFetcher, SHNetworkRequester;

#import <Foundation/Foundation.h>


@interface SHCDNDataFetcher : NSObject <SHDataFetcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SHNetworkRequester> *networkRequester; // ivar: _networkRequester
@property (readonly) Class superclass;


-(BOOL)doesRequestEtag:(id)arg0 matchInResponse:(id)arg1 ;
-(id)endpointFromDate:(id)arg0 insights:(id)arg1 location:(id)arg2 ;
-(id)init;
-(id)initWithNetworkRequester:(id)arg0 ;
-(void)clusterDataAtURL:(id)arg0 forLocation:(id)arg1 date:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchClusterURL:(id)arg0 forCurrentStorefront:(id)arg1 cachedUniqueHash:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif