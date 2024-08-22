// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSECUREKEYDELIVERYRESPONSE_H
#define ICSECUREKEYDELIVERYRESPONSE_H

@class NSData, NSDate, NSError;

#import <Foundation/Foundation.h>

#import "ICStoreDialogResponse.h"

@interface ICSecureKeyDeliveryResponse : NSObject

@property (nonatomic) NSUInteger bulkRefreshWaitInterval; // ivar: _bulkRefreshWaitInterval
@property (copy, nonatomic) NSData *contentKeyContextData; // ivar: _contentKeyContextData
@property (copy, nonatomic) ICStoreDialogResponse *dialog; // ivar: _dialog
@property (copy, nonatomic) NSDate *renewalDate; // ivar: _renewalDate
@property (copy, nonatomic) NSDate *rentalExpirationDate; // ivar: _rentalExpirationDate
@property (copy, nonatomic) NSDate *rentalPlaybackStartDate; // ivar: _rentalPlaybackStartDate
@property (copy, nonatomic) NSError *serverError; // ivar: _serverError
@property (copy, nonatomic) NSData *serverPlaybackContextData; // ivar: _serverPlaybackContextData


-(id)description;
-(void)finishAssetResourceLoadingRequest:(id)arg0 withError:(id)arg1 ;


@end


#endif