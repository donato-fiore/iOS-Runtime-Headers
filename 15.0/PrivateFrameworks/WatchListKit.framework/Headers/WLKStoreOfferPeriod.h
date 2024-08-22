// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSTOREOFFERPERIOD_H
#define WLKSTOREOFFERPERIOD_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface WLKStoreOfferPeriod : NSObject

@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)_offerPeriodForString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif