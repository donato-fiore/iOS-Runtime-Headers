// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSERVEROBJECTDATABASEIMPORTREQUEST_H
#define MPSERVEROBJECTDATABASEIMPORTREQUEST_H

@class NSDate, ICUserIdentity;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseImportRequest : NSObject

@property (readonly, copy, nonatomic) NSDate *assetURLExpirationDate; // ivar: _assetURLExpirationDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) id *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSDate *playbackAuthorizationTokenHalfLifeDate; // ivar: _playbackAuthorizationTokenHalfLifeDate
@property (retain, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


-(id)_initWithPayload:(id)arg0 ;


@end


#endif