// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSLOOKUPITEMOFFER_H
#define AMSLOOKUPITEMOFFER_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface AMSLookupItemOffer : NSObject

@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary
@property (readonly, nonatomic) NSString *offerType;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *subscriptionType;


-(id)actionTextForType:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;


@end


#endif