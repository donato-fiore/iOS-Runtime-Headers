// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCAPPOFFER_H
#define ASCAPPOFFER_H

@class NSDictionary, NSNumber, NSString, NSArray, NSURL;
@protocol ASCOffer, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCAdamID.h"

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (readonly, nonatomic) NSNumber *ageRating; // ivar: _ageRating
@property (readonly, copy, nonatomic) NSString *baseBuyParams; // ivar: _baseBuyParams
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ASCAdamID *id; // ivar: _id
@property (readonly, copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (readonly, nonatomic) NSArray *metrics; // ivar: _metrics
@property (readonly, copy, nonatomic) NSString *metricsBuyParams; // ivar: _metricsBuyParams
@property (readonly, copy, nonatomic) NSURL *preflightPackageURL; // ivar: _preflightPackageURL
@property (readonly, copy, nonatomic) NSDictionary *subtitles; // ivar: _subtitles
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *titles; // ivar: _titles
@property (readonly, copy, nonatomic) NSString *vendorName; // ivar: _vendorName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 titles:(id)arg1 subtitles:(id)arg2 flags:(NSInteger)arg3 ageRating:(id)arg4 metrics:(id)arg5 baseBuyParams:(id)arg6 metricsBuyParams:(id)arg7 additionalHeaders:(id)arg8 preflightPackageURL:(id)arg9 bundleID:(id)arg10 itemName:(id)arg11 vendorName:(id)arg12 ;
-(id)offerWithMetrics:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif