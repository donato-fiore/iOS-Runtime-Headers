// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWARELIBRARYLOOKUPRESULT_H
#define HUSOFTWARELIBRARYLOOKUPRESULT_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface HUSoftwareLibraryLookupResult : NSObject

@property (retain, nonatomic) NSDictionary *accessoriesByBundleIDs; // ivar: _accessoriesByBundleIDs
@property (retain, nonatomic) NSDictionary *accessoriesByStoreIDs; // ivar: _accessoriesByStoreIDs
@property (retain, nonatomic) NSSet *matchedLibraryItems; // ivar: _matchedLibraryItems
@property (retain, nonatomic) NSSet *matchedStoreItems; // ivar: _matchedStoreItems
@property (retain, nonatomic) NSSet *unmatchedRequests; // ivar: _unmatchedRequests


+(id)_libraryResultForRequests:(id)arg0 ;
+(id)_storeResultForRequests:(id)arg0 ;
+(id)resultForAccessories:(id)arg0 ;
+(id)resultForRequests:(id)arg0 ;
-(id)init;


@end


#endif