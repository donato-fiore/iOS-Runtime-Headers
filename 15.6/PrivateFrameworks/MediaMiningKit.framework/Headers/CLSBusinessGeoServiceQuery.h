// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSBUSINESSGEOSERVICEQUERY_H
#define CLSBUSINESSGEOSERVICEQUERY_H

@class NSString, NSArray;
@protocol CLSQueryProtocol, GEOMapServiceTicket;

#import <Foundation/Foundation.h>

#import "CLSPOICache.h"

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>

 {
    CLSPOICache *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, copy, nonatomic) NSArray *muids; // ivar: _muids
@property (readonly, nonatomic) NSArray *resolvedBusinessItems; // ivar: _resolvedBusinessItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOMapServiceTicket> *ticket; // ivar: _ticket


-(id)initWithMUIDs:(id)arg0 ;
-(void)cancel;
-(void)prepareForRetry;
-(void)submitWithHandler:(id)arg0 ;


@end


#endif