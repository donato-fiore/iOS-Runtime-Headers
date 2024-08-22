// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSLOOKUPITEM_H
#define AMSLOOKUPITEM_H

@class NSString, NSArray, NSNumber, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSArray *artwork;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *categoryNames;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreIdentifier;
@property (readonly, nonatomic) NSDictionary *itemDictionary; // ivar: _itemDictionary
@property (readonly, copy, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) NSInteger numberOfUserRatings;
@property (readonly, nonatomic) NSInteger numberOfUserRatingsForCurrentVersion;
@property (readonly, copy, nonatomic) NSString *offerName;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, copy, nonatomic) NSURL *productPageURL;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) float userRatingForCurrentVersion;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif