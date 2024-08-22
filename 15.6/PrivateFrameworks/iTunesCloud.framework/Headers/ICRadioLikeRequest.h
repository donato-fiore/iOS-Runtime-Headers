// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRADIOLIKEREQUEST_H
#define ICRADIOLIKEREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICRadioLikeRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger likeState; // ivar: _likeState
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (nonatomic) NSInteger stationID; // ivar: _stationID
@property (copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (nonatomic) NSInteger storeAdamID; // ivar: _storeAdamID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif