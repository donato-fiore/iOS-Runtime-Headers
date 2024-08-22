// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICINPUTCONTEXTMANAGER_H
#define _ICINPUTCONTEXTMANAGER_H

@class NSString;
@protocol _ICPredictionManaging, _ICLexiconManaging, _ICFeedbackManaging;

#import <Foundation/Foundation.h>

#import "_ICPredictionManager.h"

@interface _ICInputContextManager : NSObject <_ICPredictionManaging, _ICLexiconManaging, _ICFeedbackManaging>

 {
    *_LXLexicon _durableNamedEntityLexicon;
    *_LXLexicon _recentNamedEntityLexicon;
    NSObject<_ICLexiconManaging> *_lexiconManager;
    _ICPredictionManager *_predictionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)addContactObserver:(SEL)arg0 ;
-(id)getLexiconManager;
-(id)getPredictionManager;
-(id)initForIntegrationTesting;
-(id)initWithPredictionSource:(id)arg0 ;
-(id)lastCachedResultWithInitialCharacters:(id)arg0 ;
-(id)loadLexicons;
-(id)loadLexicons:(id)arg0 ;
-(id)loadLexiconsUsingFilter:(id)arg0 ;
-(id)searchForMeCardEmailAddresses;
-(id)searchForMeCardRegions;
-(id)searchWithTriggers:(id)arg0 application:(id)arg1 recipient:(id)arg2 localeIdentifier:(id)arg3 isResponseDenyListed:(BOOL)arg4 shouldDisableAutoCaps:(BOOL)arg5 timeoutInMilliseconds:(int)arg6 resultLimit:(int)arg7 error:(*id)arg8 ;
-(id)searchWithTriggers:(id)arg0 application:(id)arg1 recipient:(id)arg2 localeIdentifier:(id)arg3 timeoutInMilliseconds:(int)arg4 resultLimit:(int)arg5 error:(*id)arg6 ;
-(void)doInitLexiconManager;
-(void)doInitPredictionManager;
-(void)hibernate;
-(void)initLexiconManager;
-(void)initPredictionManager;
-(void)predictedItemSelected:(id)arg0 ;
-(void)propogateMetrics:(id)arg0 data:(id)arg1 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)provideLexiconFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)providePredictionFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)reset;
-(void)unloadLexicons;
-(void)warmUp;


@end


#endif