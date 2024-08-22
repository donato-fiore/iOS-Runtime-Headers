// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTOKENSCOPEPARSER_H
#define CSTOKENSCOPEPARSER_H


#import <Foundation/Foundation.h>


@interface CSTokenScopeParser : NSObject



-(NSInteger)indexForScopeKey:(id)arg0 ;
-(id)init;
-(id)messageSuggestionTokenForString:(id)arg0 ;
-(id)scopeKeyMapTable;
-(id)suggestionTokenForString:(id)arg0 ;
-(id)tokenFromConfiguration:(id)arg0 userString:(id)arg1 displayString:(id)arg2 handle:(id)arg3 ;
-(id)tokenScopeConfigurationForKey:(id)arg0 ;
-(id)tokenScopeConfigurationTable;
-(void)loadDefaultScopeKeyMapTable;
-(void)loadScopeKeyMapTableForCurrentLocale;
-(void)updateScopeKeyMapTableIfNeeded;


@end


#endif