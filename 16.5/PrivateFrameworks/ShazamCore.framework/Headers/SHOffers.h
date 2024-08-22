// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOFFERS_H
#define SHOFFERS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "SHTokenizedURL.h"

@interface SHOffers : NSObject

@property (readonly, copy, nonatomic) NSString *campaignSubtitle;
@property (readonly, copy, nonatomic) NSString *defaultSubtitle;
@property (readonly, nonatomic) SHTokenizedURL *defaultURL; // ivar: _defaultURL
@property (readonly, nonatomic) NSDictionary *offerResponse; // ivar: _offerResponse
@property (readonly, nonatomic) SHTokenizedURL *shazamURL; // ivar: _shazamURL


-(id)appleMusicOffers;
-(id)campaignURLForTrackID:(id)arg0 bundleID:(id)arg1 ;
-(id)configForOfferNamed:(id)arg0 bundleID:(id)arg1 ;
-(id)defaultURLForBundleID:(id)arg0 ;
-(id)initWithOfferResponse:(id)arg0 ;
-(id)subtitleForOfferNamed:(id)arg0 bundleID:(id)arg1 ;
-(id)urlForOfferNamed:(id)arg0 bundleID:(id)arg1 ;
-(id)valueForSpecializedKey:(id)arg0 forBundleID:(id)arg1 inDictionary:(id)arg2 ;


@end


#endif