// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBNETWORKFETCHREQUESTDESCRIPTOR_H
#define TBNETWORKFETCHREQUESTDESCRIPTOR_H

@class NSSet, NSString, NSPredicate, NSDate, GEOWiFiQualityNetworkSearch;
@protocol TBFetchRequestDescriptor, NSCopying;

#import <Foundation/Foundation.h>

#import "TBLocalFetchRequestDescriptor.h"

@interface TBNetworkFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>



@property (retain, nonatomic) NSSet *bssids; // ivar: _bssids
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor; // ivar: _localFetchDescriptor
@property (retain, nonatomic) NSPredicate *localFetchPredicate; // ivar: _localFetchPredicate
@property (retain, nonatomic) NSDate *maxCacheAge; // ivar: _maxCacheAge
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor; // ivar: _preferLocalFetchDescriptor
@property (retain, nonatomic) GEOWiFiQualityNetworkSearch *remoteRequest; // ivar: _remoteRequest
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *tileItems;
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSSIDs:(id)arg0 ;
-(id)initWithBSSIDs:(id)arg0 maxCacheAge:(id)arg1 ;


@end


#endif