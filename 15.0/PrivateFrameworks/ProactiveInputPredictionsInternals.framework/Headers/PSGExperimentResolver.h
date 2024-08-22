// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGEXPERIMENTRESOLVER_H
#define PSGEXPERIMENTRESOLVER_H

@class _PASLock, NSDictionary, TRIClient;

#import <Foundation/Foundation.h>


@interface PSGExperimentResolver : NSObject {
    _PASLock *_responseSuggestionsConfigLock;
    _PASLock *_wordBoundaryConfigLock;
    NSDictionary *_zkwLockPerLanguage;
    NSDictionary *_wbLockPerLanguage;
    TRIClient *_trialClient;
}


@property (readonly, nonatomic) NSDictionary *wordBoundaryLangAndNamespaces; // ivar: _wordBoundaryLangAndNamespaces
@property (readonly, nonatomic) NSDictionary *zkwLangAndNamespaces; // ivar: _zkwLangAndNamespaces


+(id)_locksWithCount:(NSUInteger)arg0 ;
+(id)sharedInstance;
-(id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg0 ;
-(id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)arg0 ;
-(id)getResponseSuggestionsExperimentConfig:(id)arg0 ;
-(id)getResponseSuggestionsExperimentConfig:(id)arg0 shouldDownloadAssets:(BOOL)arg1 ;
-(id)getWordBoundarySuggestionsExperimentConfig:(id)arg0 ;
-(id)getWordBoundarySuggestionsExperimentConfig:(id)arg0 shouldDownloadAssets:(BOOL)arg1 ;
-(id)init;
-(void)warmupForLocale:(id)arg0 ;


@end


#endif