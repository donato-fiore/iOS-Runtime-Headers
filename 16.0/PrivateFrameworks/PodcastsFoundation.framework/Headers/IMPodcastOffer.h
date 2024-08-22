// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPODCASTOFFER_H
#define IMPODCASTOFFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMPodcastOffer : NSObject

@property (retain, nonatomic) NSString *kind; // ivar: _kind
@property (retain, nonatomic) NSString *priceType; // ivar: _priceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)offerTypeAsFlagBit;


@end


#endif