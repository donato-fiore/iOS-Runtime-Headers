// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTMATCHCRITERIA_H
#define WBSSAVEDACCOUNTMATCHCRITERIA_H

@class NSURL, NSSet, NSString;

#import <Foundation/Foundation.h>

#import "WBSAutoFillAssociatedDomainsManager.h"
#import "WBSGlobalFrameIdentifier.h"

@interface WBSSavedAccountMatchCriteria : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSSet *associatedDomainsForURL;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager; // ivar: _associatedDomainsManager
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSString *partialUsername; // ivar: _partialUsername
@property (readonly, nonatomic) BOOL queryShouldIncludePasskeyMatchesForNonAutoFillContext;
@property (readonly, nonatomic) BOOL queryShouldIncludeSavedAccountsWithDoNotSaveMarkers;
@property (readonly, nonatomic) BOOL queryShouldOmitAutoFillPasskeyMatches;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingAssociatedDomainsOfURL;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingHighLevelDomainAndSimplifiedDomainOfURL;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsWithEmptyUsernames;
@property (readonly, nonatomic) WBSGlobalFrameIdentifier *webFrameIdentifier; // ivar: _webFrameIdentifier


+(id)criteriaForExactFQDNPasswordMatchesOfURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 partialUsername:(id)arg2 associatedDomainsManager:(id)arg3 webFrameIdentifier:(id)arg4 ;


@end


#endif