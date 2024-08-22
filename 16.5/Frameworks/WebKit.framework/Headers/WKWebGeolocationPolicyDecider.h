// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBGEOLOCATIONPOLICYDECIDER_H
#define WKWEBGEOLOCATIONPOLICYDECIDER_H


#import <Foundation/Foundation.h>


@interface WKWebGeolocationPolicyDecider : NSObject {
    RetainPtr<NSObject<OS_dispatch_queue> *> _diskDispatchQueue;
    RetainPtr<NSMutableDictionary> _sites;
    Deque<std::unique_ptr<PermissionRequest>, 0UL> _challenges;
    unique_ptr<PermissionRequest, std::default_delete<PermissionRequest>> _activeChallenge;
}




+(id)sharedPolicyDecider;
-(NSInteger)_getChallengeCountFromHistoryForToken:(id)arg0 requestingURL:(id)arg1 ;
-(id)_siteFile;
-(id)_siteFileInContainerDirectory:(id)arg0 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg1 ;
-(id)init;
-(void)_addChallengeCount:(NSInteger)arg0 forToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)_executeNextChallenge;
-(void)_finishActiveChallenge:(BOOL)arg0 ;
-(void)_loadWithCompletionHandler:(id)arg0 ;
-(void)_save;
-(void)clearCache;
-(void)dealloc;
-(void)decidePolicyForGeolocationRequestFromOrigin:(*void)arg0 requestingURL:(id)arg1 view:(id)arg2 listener:(id)arg3 ;


@end


#endif