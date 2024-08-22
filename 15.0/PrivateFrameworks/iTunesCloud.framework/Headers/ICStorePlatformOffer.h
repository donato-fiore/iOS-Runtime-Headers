// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTOREPLATFORMOFFER_H
#define ICSTOREPLATFORMOFFER_H

@class NSDictionary, NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ICStorePlatformOffer : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif