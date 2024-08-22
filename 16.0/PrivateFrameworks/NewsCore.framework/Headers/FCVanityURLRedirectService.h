// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCVANITYURLREDIRECTSERVICE_H
#define FCVANITYURLREDIRECTSERVICE_H

@protocol FCContentContext;

#import <Foundation/Foundation.h>

#import "FCFetchedValueManager.h"

@interface FCVanityURLRedirectService : NSObject

@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, nonatomic) FCFetchedValueManager *vanityURLMappingManager; // ivar: _vanityURLMappingManager


-(BOOL)hasRedirectForURL:(id)arg0 ;
-(id)_destinationURLForURL:(id)arg0 ;
-(id)destinationURLForURL:(id)arg0 ;
-(id)init;
-(id)initWithContentContext:(id)arg0 ;
-(void)acquireHoldTokenOnUnderlyingAssets;
-(void)resolveURL:(id)arg0 withQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateUnderlyingMappingWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif