// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKBASEFOLLOWUPMANAGER_H
#define AKBASEFOLLOWUPMANAGER_H

@protocol AKFollowUpItemFactory, AKFollowUpProvider;

#import <Foundation/Foundation.h>


@interface AKBaseFollowupManager : NSObject {
    id<AKFollowUpItemFactory> *_factory;
    id<AKFollowUpProvider> *_provider;
}




-(BOOL)synchronizeFollowUpsWithServerPayload:(id)arg0 altDSID:(id)arg1 error:(*id)arg2 ;
-(id)_alignedInsertionCandidates:(id)arg0 withExistingItems:(id)arg1 ;
-(id)initWithFollowUpFactory:(id)arg0 provider:(id)arg1 ;
-(void)teardownFollowUpWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif