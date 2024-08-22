// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONPRIVACYPREFLIGHTCONTROLLER_H
#define SBAPPLICATIONPRIVACYPREFLIGHTCONTROLLER_H

@class PDCPreflightManager, LSApplicationIdentity, NSMutableDictionary, NSString;
@protocol BSDescriptionStreamable, PDCPreflightRequestCanceling;

#import <Foundation/Foundation.h>


@interface SBApplicationPrivacyPreflightController : NSObject <BSDescriptionStreamable>

 {
    PDCPreflightManager *_privacyPreflightManager;
    LSApplicationIdentity *_applicationIdentity;
    NSMutableDictionary *_pendingCompletionsBySceneIdentifier;
    id<PDCPreflightRequestCanceling> *_preflightCancelToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPreflightManager:(id)arg0 applicationIdentity:(id)arg1 ;
-(void)_notePreflightFinishedWithResult:(NSUInteger)arg0 cancelToken:(id)arg1 ;
// -(void)addPendingCompletion:(id)arg0 forSceneIdentifier:(unk)arg1  ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)notePreflightFinishedWithResult:(NSUInteger)arg0 ;


@end


#endif