// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDEVICEOFFER_H
#define AMSDEVICEOFFER_H

@class NSNumber, NSString, NSSet;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSDeviceOffer : NSObject <AMSBagConsumer>



@property (copy, nonatomic) NSNumber *adamId; // ivar: _adamId
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description; // ivar: _description
@property (nonatomic, getter=isDowngrading) BOOL downgrading; // ivar: _downgrading
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (readonly, nonatomic) NSUInteger offerType;
@property (readonly, nonatomic) NSSet *serialNumbers; // ivar: _serialNumbers
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;


+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)offersSetFromArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithOfferIdentifier:(id)arg0 ;


@end


#endif