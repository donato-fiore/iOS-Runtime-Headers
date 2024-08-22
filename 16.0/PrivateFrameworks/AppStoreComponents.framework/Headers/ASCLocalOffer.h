// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCLOCALOFFER_H
#define ASCLOCALOFFER_H

@class NSNumber, NSString, NSArray, NSDictionary;
@protocol ASCOffer, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCAdamID.h"
#import "ASCOfferMetadata.h"

@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying>



@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flags;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, nonatomic) ASCOfferMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *titles;


+(id)viewInAppStoreOfferForLockupView:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedPrice;
-(id)initWithMetadata:(id)arg0 action:(id)arg1 ;
-(id)offerWithMetrics:(id)arg0 ;
-(id)price;


@end


#endif