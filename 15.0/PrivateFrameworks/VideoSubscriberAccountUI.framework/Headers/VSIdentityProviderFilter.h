// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERFILTER_H
#define VSIDENTITYPROVIDERFILTER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderFilter : NSObject

@property (copy, nonatomic) NSArray *allIdentityProviders; // ivar: _allIdentityProviders
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs; // ivar: _supportedAccountProviderIDs


+(id)keyPathsForValuesAffectingFilteredIdentityProviders;
-(id)init;


@end


#endif