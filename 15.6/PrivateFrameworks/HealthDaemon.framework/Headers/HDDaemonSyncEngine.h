// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDAEMONSYNCENGINE_H
#define HDDAEMONSYNCENGINE_H

@class NSArray, NSDictionary, NSString;
@protocol HDSyncEngine;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDaemonSyncEntityManager.h"

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine>

 {
    HDProfile *_profile;
    HDDaemonSyncEntityManager *_entityManager;
}


@property (readonly, copy, nonatomic) NSArray *allOrderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_didCompleteReadTransaction; // ivar: _unitTest_didCompleteReadTransaction


-(BOOL)applyAcknowledgedAnchorMap:(id)arg0 forStore:(id)arg1 resetNext:(BOOL)arg2 resetInvalid:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)applySyncChange:(id)arg0 forStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)getReceivedAnchorMap:(id)arg0 forStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)performSyncSession:(id)arg0 accessibilityAssertion:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetNextAnchorsForStore:(id)arg0 profile:(id)arg1 minimumElapsedTime:(CGFloat)arg2 error:(*id)arg3 ;
-(id)initWithProfile:(id)arg0 ;
-(id)syncAnchorRangesIfRequiredForSession:(id)arg0 startingAnchors:(id)arg1 error:(*id)arg2 ;
-(void)resetAnchorsWithFailedChanges:(id)arg0 store:(id)arg1 ;
-(void)resetStore:(id)arg0 ;


@end


#endif