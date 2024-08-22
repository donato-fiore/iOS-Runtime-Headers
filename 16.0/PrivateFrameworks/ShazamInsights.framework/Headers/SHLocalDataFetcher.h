// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHLOCALDATAFETCHER_H
#define SHLOCALDATAFETCHER_H

@class NSString;
@protocol SHDataFetcher;

#import <Foundation/Foundation.h>


@interface SHLocalDataFetcher : NSObject <SHDataFetcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)clusterDataAtURL:(id)arg0 forLocation:(id)arg1 date:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchClusterURL:(id)arg0 forCurrentStorefront:(id)arg1 cachedUniqueHash:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif