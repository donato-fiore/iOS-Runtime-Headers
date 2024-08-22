// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONPLAYBACKRESPONSE_H
#define ICMUSICSUBSCRIPTIONPLAYBACKRESPONSE_H

@class NSDictionary, NSDate, NSString, NSArray, NSData, NSError;
@protocol ICStoreResponseProtocol;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICStoreDialogResponse.h"

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol>

 {
    NSDictionary *_responseDictionary;
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *householdID;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, copy, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (readonly) Class superclass;


-(id)initWithResponseDictionary:(id)arg0 requestDate:(id)arg1 urlBag:(id)arg2 ;
-(id)itemWithStoreAdamID:(NSInteger)arg0 ;


@end


#endif