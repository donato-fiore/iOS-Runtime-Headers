// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTCHARITY_H
#define SKUIGIFTCHARITY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"

@interface SKUIGiftCharity : NSObject

@property (readonly, nonatomic) NSString *amountDisclaimer; // ivar: _amountDisclaimer
@property (readonly, nonatomic) NSString *charityDescription; // ivar: _description
@property (readonly, nonatomic) NSArray *donationAmounts; // ivar: _amounts
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *legalText; // ivar: _legalText
@property (readonly, nonatomic) NSString *legalText2; // ivar: _legalText2
@property (readonly, nonatomic) SKUIArtwork *logoArtwork; // ivar: _logoArtwork
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithCharityDictionary:(id)arg0 ;


@end


#endif