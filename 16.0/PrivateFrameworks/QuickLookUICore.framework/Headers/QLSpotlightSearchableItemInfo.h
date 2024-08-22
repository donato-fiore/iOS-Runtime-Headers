// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLSPOTLIGHTSEARCHABLEITEMINFO_H
#define QLSPOTLIGHTSEARCHABLEITEMINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLSpotlightSearchableItemInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (copy, nonatomic) NSString *searchableItemUniqueIdentifier; // ivar: _searchableItemUniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)spotlightInfoWithUniqueIdentifier:(id)arg0 queryString:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif