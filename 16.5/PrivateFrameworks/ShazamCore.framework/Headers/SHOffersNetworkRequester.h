// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOFFERSNETWORKREQUESTER_H
#define SHOFFERSNETWORKREQUESTER_H


#import <Foundation/Foundation.h>

#import "SHStorefront.h"

@interface SHOffersNetworkRequester : NSObject

@property (readonly, nonatomic) SHStorefront *storefront; // ivar: _storefront


-(id)endpointURLWithHost:(id)arg0 path:(id)arg1 storefront:(id)arg2 ;
-(void)fetchOffersAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)offersWithCompletion:(id)arg0 ;


@end


#endif