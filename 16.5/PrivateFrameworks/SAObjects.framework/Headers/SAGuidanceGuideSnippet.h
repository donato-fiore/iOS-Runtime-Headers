// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGUIDANCEGUIDESNIPPET_H
#define SAGUIDANCEGUIDESNIPPET_H

@class NSArray, NSString;


#import "SAUISnippet.h"
#import "SAUIButton.h"
#import "SAUIAppPunchOut.h"

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (retain, nonatomic) SAUIButton *appPunchOutButton;
@property (retain, nonatomic) SAUIAppPunchOut *appStorePunchOut;
@property (copy, nonatomic) NSArray *domainSnippets;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *intentEnabledAppSnippets;


+(id)guideSnippet;
+(id)guideSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif