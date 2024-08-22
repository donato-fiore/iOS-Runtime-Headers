// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTCOMPLETER_H
#define CKCONTEXTCOMPLETER_H

@class NSString, NSLocale, NSArray, NSDate, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKContextResponse.h"

@interface CKContextCompleter : NSObject {
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    uint8_t _discarded;
    uint8_t _engaged;
    uint8_t _inputKeystrokes;
    NSArray *_couldHaveShown;
    NSString *_input;
    NSDate *_hideCompletionsAfterDate;
    BOOL _hideZKW;
    BOOL _hideCompletions;
    NSUInteger _mustPrefixMatchLength;
    NSMutableArray *_zkwResults;
    NSUInteger _creationTime;
    BOOL _likelyUnsolicited;
}




-(id)_resultsMatching:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;
-(id)queriesMatching:(id)arg0 ;
-(id)resultsMatching:(id)arg0 ;
-(id)resultsMatchingTags:(id)arg0 ;
-(void)dealloc;
-(void)discard;
-(void)logEngagement:(id)arg0 forInput:(id)arg1 ;
-(void)logEngagement:(id)arg0 forInput:(id)arg1 completion:(id)arg2 ;
-(void)logResultsShown:(NSUInteger)arg0 serverOverride:(BOOL)arg1 ;
-(void)logResultsShown:(NSUInteger)arg0 serverOverride:(BOOL)arg1 forInput:(id)arg2 ;
-(void)logTransactionSuccessfulForInput:(id)arg0 ;
-(void)logTransactionSuccessfulForInput:(id)arg0 completion:(id)arg1 ;


@end


#endif