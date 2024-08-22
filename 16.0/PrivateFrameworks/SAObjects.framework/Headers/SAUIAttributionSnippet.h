// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIATTRIBUTIONSNIPPET_H
#define SAUIATTRIBUTIONSNIPPET_H



#import "SAUISnippet.h"
#import "SAUIAppPunchOut.h"

@interface SAUIAttributionSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (nonatomic) BOOL showKeyLine;


+(id)attributionSnippet;
+(id)attributionSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif