// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITRANSACTIONOFFER_H
#define VUITRANSACTIONOFFER_H

@class NSDictionary, NSArray, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface VUITransactionOffer : NSObject {
    NSDictionary *_transactionOfferDict;
    NSArray *_videosPlayables;
}


@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) BOOL initiateFamilySetup; // ivar: _initiateFamilySetup
@property (readonly, copy, nonatomic) NSDictionary *offer; // ivar: _offer
@property (readonly, nonatomic) BOOL playWhenDone;
@property (readonly, nonatomic) NSURL *sharedWatchUrl; // ivar: _sharedWatchUrl
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *videosPlayables;


-(id)getCanonicalID;
-(id)initWithDictionary:(id)arg0 ;
-(id)notificationBody;
-(id)notificationTitle;


@end


#endif