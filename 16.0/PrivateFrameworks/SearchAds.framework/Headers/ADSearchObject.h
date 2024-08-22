// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSEARCHOBJECT_H
#define ADSEARCHOBJECT_H

@class NSArray, NSString, NSError, APOdmlReranker;

#import <Foundation/Foundation.h>

#import "ADDESRecordsManager.h"

@interface ADSearchObject : NSObject

@property (nonatomic) CGFloat SLA; // ivar: _SLA
@property (retain, nonatomic) NSArray *advertisements; // ivar: _advertisements
@property (retain, nonatomic) ADDESRecordsManager *desRecordManager; // ivar: _desRecordManager
@property (retain, nonatomic) NSString *deviceRequestID; // ivar: _deviceRequestID
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger ident; // ivar: _ident
@property (retain, nonatomic) NSArray *organics; // ivar: _organics
@property (retain, nonatomic) APOdmlReranker *reranker; // ivar: _reranker
@property (retain, nonatomic) NSString *routingInfoData; // ivar: _routingInfoData
@property (retain, nonatomic) NSString *sponsoredSearchRequestData; // ivar: _sponsoredSearchRequestData
@property (retain, nonatomic) NSString *userTargetingID; // ivar: _userTargetingID


-(BOOL)isAppInstalled:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSponsoredSearchRequestData:(id)arg0 routingInfoData:(id)arg1 deviceRequestID:(id)arg2 userTargetingID:(id)arg3 error:(id)arg4 ;
-(void)addFeaturesToAdvertisements;
-(void)orderedAds:(id)arg0 ;
-(void)orderedAdsWithIDs:(id)arg0 ;


@end


#endif