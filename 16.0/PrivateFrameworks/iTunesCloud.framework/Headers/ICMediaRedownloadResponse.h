// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMEDIAREDOWNLOADRESPONSE_H
#define ICMEDIAREDOWNLOADRESPONSE_H

@class NSDate, NSString, NSArray, NSDictionary, NSError, NSData;
@protocol ICStoreResponseProtocol;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICStoreDialogResponse.h"

@interface ICMediaRedownloadResponse : NSObject <ICStoreResponseProtocol>

 {
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}


@property (readonly, nonatomic) BOOL authorized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, nonatomic) unsigned int downloadQueueItemCount;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *jingleAction;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly, nonatomic) BOOL shouldCancelPurchaseBatch;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (readonly) Class superclass;


-(id)initWithResponseDictionary:(id)arg0 requestDate:(id)arg1 urlBag:(id)arg2 ;


@end


#endif