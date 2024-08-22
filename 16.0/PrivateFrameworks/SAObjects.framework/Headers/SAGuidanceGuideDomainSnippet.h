// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGUIDANCEGUIDEDOMAINSNIPPET_H
#define SAGUIDANCEGUIDEDOMAINSNIPPET_H

@class NSString, NSURL, NSArray;


#import "SAUISnippet.h"

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (copy, nonatomic) NSString *domainAlternateDisplayName;
@property (copy, nonatomic) NSString *domainDisplayName;
@property (copy, nonatomic) NSURL *domainIconURI;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) BOOL enabledInOfflineMode;
@property (nonatomic) BOOL enabledInOnlineMode;
@property (copy, nonatomic) NSArray *guideSections;
@property (copy, nonatomic) NSString *iconDisplayIdentifier;
@property (nonatomic) BOOL iconNeedsProcessing;
@property (copy, nonatomic) NSString *iconResourceName;
@property (nonatomic) BOOL isAppIcon;
@property (nonatomic) BOOL performIntentEnabledAppAuthorizationCheck;
@property (copy, nonatomic) NSString *tagPhrase;


+(id)guideDomainSnippet;
+(id)guideDomainSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif