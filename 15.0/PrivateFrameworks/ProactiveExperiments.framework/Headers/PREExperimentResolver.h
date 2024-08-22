// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREEXPERIMENTRESOLVER_H
#define PREEXPERIMENTRESOLVER_H

@class _PASLock, NSDictionary, TRIClient;
@protocol PREExperimentResolverProtocol;

#import <Foundation/Foundation.h>


@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol>

 {
    _PASLock *_guardedSmartReplyConfig;
    NSDictionary *_lockPerLanguage;
    TRIClient *_trialClient;
}


@property (readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces; // ivar: _smartReplyLangAndNamespaces


+(id)sharedInstance;
-(id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg0 ;
-(id)getResponseSuggestionsExperimentConfig:(id)arg0 shouldDownloadAssets:(BOOL)arg1 ;
-(id)init;
-(void)warmupForLocale:(id)arg0 ;


@end


#endif