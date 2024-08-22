// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDONATIONCONFIGURATION_H
#define SKUIDONATIONCONFIGURATION_H

@class NSMutableDictionary, NSHashTable, NSOperationQueue, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIDonationConfiguration : NSObject {
    NSMutableDictionary *_charityImages;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}


@property (readonly, nonatomic) NSArray *allCharities; // ivar: _charities
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) NSURL *donationPurchaseURL; // ivar: _donationPurchaseURL
@property (readonly, nonatomic) NSURL *donationValidationURL; // ivar: _donationValidationURL


-(id)charityForIdentifier:(id)arg0 ;
-(id)initWithOperationQueue:(id)arg0 clientContext:(id)arg1 ;
-(id)logoImageForCharity:(id)arg0 ;
-(void)_finishLoadWithResponse:(id)arg0 error:(id)arg1 block:(id)arg2 ;
-(void)_setLogoImage:(id)arg0 forCharity:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)loadConfigurationWithCompletionBlock:(id)arg0 ;
-(void)loadLogoForCharity:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif