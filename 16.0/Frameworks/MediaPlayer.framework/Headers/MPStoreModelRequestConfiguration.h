// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTOREMODELREQUESTCONFIGURATION_H
#define MPSTOREMODELREQUESTCONFIGURATION_H

@class NSURLRequest, NSArray;

#import <Foundation/Foundation.h>


@interface MPStoreModelRequestConfiguration : NSObject

@property (readonly, copy, nonatomic) NSURLRequest *URLRequest;
@property (readonly, copy, nonatomic) NSArray *URLRequests; // ivar: _URLRequests
@property (readonly, nonatomic) NSUInteger itemMetadataRequestReason; // ivar: _itemMetadataRequestReason
@property (readonly, nonatomic) NSArray *requestedItemIdentifiers; // ivar: _requestedItemIdentifiers
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithRequestedItemIdentifiers:(id)arg0 reason:(NSUInteger)arg1 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithURLRequests:(id)arg0 ;


@end


#endif