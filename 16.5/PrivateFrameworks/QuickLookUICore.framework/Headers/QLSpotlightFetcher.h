// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLSPOTLIGHTFETCHER_H
#define QLSPOTLIGHTFETCHER_H

@class NSString;


#import "QLItemFetcher.h"
#import "QLSpotlightSearchableItemInfo.h"

@interface QLSpotlightFetcher : QLItemFetcher {
    NSString *_searchableItemUniqueIdentifier;
    NSString *_queryString;
    NSString *_applicationBundleIdentifier;
}


@property (readonly) QLSpotlightSearchableItemInfo *info; // ivar: _info


+(BOOL)supportsSecureCoding;
-(BOOL)isLongFetchOperation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg0 queryString:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
-(id)itemSize;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;


@end


#endif