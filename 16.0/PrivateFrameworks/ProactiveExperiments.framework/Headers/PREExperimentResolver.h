// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREEXPERIMENTRESOLVER_H
#define PREEXPERIMENTRESOLVER_H

@class _PASLock, TRIClient, NSString, NSDictionary;
@protocol PREExperimentResolverProtocol;

#import <Foundation/Foundation.h>


@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol>

 {
    _PASLock *_guardedSmartReplyConfig;
    TRIClient *_trialClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces; // ivar: _smartReplyLangAndNamespaces
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedQueue;
-(id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg0 ;
-(id)getResponseSuggestionsExperimentConfig:(id)arg0 shouldDownloadAssets:(BOOL)arg1 ;
-(id)init;
-(void)warmupForLocale:(id)arg0 ;


@end


#endif