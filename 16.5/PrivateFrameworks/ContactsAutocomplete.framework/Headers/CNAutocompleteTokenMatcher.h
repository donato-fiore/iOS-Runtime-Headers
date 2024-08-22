// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETETOKENMATCHER_H
#define CNAUTOCOMPLETETOKENMATCHER_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteTokenMatcher : NSObject



+(BOOL)doSearchTokens:(id)arg0 matchNameTokens:(id)arg1 ;
+(id)indexesOfNameTokens:(id)arg0 matchingSearchToken:(id)arg1 ;
+(id)tokensForNameString:(id)arg0 ;


@end


#endif