// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGEXPERIMENTRESOLVER_H
#define PSGEXPERIMENTRESOLVER_H

@class _PASLock, TRIClient, NSDictionary;

#import <Foundation/Foundation.h>


@interface PSGExperimentResolver : NSObject {
    _PASLock *_responseSuggestionsConfigLock;
    _PASLock *_wordBoundaryConfigLock;
    TRIClient *_trialClient;
}


@property (readonly, nonatomic) NSDictionary *wordBoundaryLangAndNamespaces; // ivar: _wordBoundaryLangAndNamespaces
@property (readonly, nonatomic) NSDictionary *zkwLangAndNamespaces; // ivar: _zkwLangAndNamespaces


+(id)sharedInstance;
+(id)sharedWordBoundaryQueue;
+(id)sharedZKWQueue;
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