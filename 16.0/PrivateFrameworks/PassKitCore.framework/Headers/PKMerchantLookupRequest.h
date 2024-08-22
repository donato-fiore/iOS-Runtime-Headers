// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANTLOOKUPREQUEST_H
#define PKMERCHANTLOOKUPREQUEST_H

@class MKMapService;
@protocol OS_dispatch_queue, PKMerchantLookupRequestSource;

#import <Foundation/Foundation.h>


@interface PKMerchantLookupRequest : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<PKMerchantLookupRequestSource> *_source;
    MKMapService *_service;
}




-(id)_brandFromMapItem:(id)arg0 ;
-(id)_merchantFromMapItem:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(void)_mapItemBrandWithMUID:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_mapsDataWithResponse:(id)arg0 searchMapItem:(id)arg1 completion:(id)arg2 ;
-(void)startLookupWithCompletion:(id)arg0 ;


@end


#endif