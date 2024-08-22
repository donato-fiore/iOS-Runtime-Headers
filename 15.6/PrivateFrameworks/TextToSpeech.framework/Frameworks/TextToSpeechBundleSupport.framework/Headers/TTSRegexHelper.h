// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSREGEXHELPER_H
#define TTSREGEXHELPER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSRegularExpression;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSRegexHelper : NSObject {
    vector<boost::basic_regex<char>, std::allocator<boost::basic_regex<char> > > _boostRegexes;
    NSMutableArray *_nsRegexes;
    NSMutableSet *_duplicateChecker;
    NSObject<OS_dispatch_queue> *_ttsRegexQueue;
    NSMutableDictionary *_nsRules;
    NSMutableDictionary *_boostRules;
    NSRegularExpression *_escapeStripper;
}


@property (nonatomic) int regexStyle; // ivar: _regexStyle
@property (nonatomic) BOOL skipLuthorRules; // ivar: _skipLuthorRules


+(id)sharedInstance;
-(BOOL)hasStoredRules;
-(id)_boostApplyMatches:(id)arg0 rangeAdjustments:(id)arg1 text:(id)arg2 logging:(id)arg3 ;
-(id)_boostApplyRulesForText:(id)arg0 rangeAdjustments:(id)arg1 ;
-(id)_calculatedUTF8Offsets:(id)arg0 ;
-(id)_nsApplyRulesForText:(id)arg0 rangeAdjustments:(id)arg1 ;
-(id)_processReplacementStringForSpecialCharacters:(id)arg0 ;
-(id)applyRulesForText:(id)arg0 rangeAdjustments:(id)arg1 ;
-(id)boostRules;
-(id)init;
-(id)regexRules;
-(void)_addNSRule:(id)arg0 ruleApplication:(id)arg1 caseInsensitive:(BOOL)arg2 ;
-(void)_addRules:(id)arg0 ;
-(void)addRules:(id)arg0 ;
-(void)resetStoredRules;


@end


#endif