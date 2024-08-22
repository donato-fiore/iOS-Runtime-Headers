// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERFILTER_H
#define VSIDENTITYPROVIDERFILTER_H

@class NSArray, NSString, VSTrie;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderFilter : NSObject

@property (copy, nonatomic) NSArray *allIdentityProviders; // ivar: _allIdentityProviders
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (retain, nonatomic) VSTrie *searchTree; // ivar: _searchTree
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs; // ivar: _supportedAccountProviderIDs
@property (copy, nonatomic) NSArray *supportedIdentityProviders; // ivar: _supportedIdentityProviders


+(id)keyPathsForValuesAffectingFilteredIdentityProviders;
-(id)_camelAndWordBasedPrefixesForProvider:(id)arg0 ;
-(id)init;
-(void)_refreshProviderList;


@end


#endif