// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSHARERELATIONSHIPCHANGEREQUESTHELPER_H
#define PHSHARERELATIONSHIPCHANGEREQUESTHELPER_H

@class PHObject<PHShare>;


#import "PHRelationshipChangeRequestHelper.h"
#import "PHObject.h"

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper

@property (weak, nonatomic) PHObject *originalAsset; // ivar: _originalAsset
@property (weak, nonatomic) PHObject<PHShare> *originalShare; // ivar: _originalShare


-(BOOL)applyMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)_mutableParticipantsObjectIDsAndUUIDs;
-(void)_prepareParticipantsHelperIfNeeded;
-(void)_prepareParticipantsWithFetchResult:(id)arg0 ;
-(void)addParticipants:(id)arg0 toChangeRequest:(id)arg1 ;
-(void)removeParticipants:(id)arg0 toChangeRequest:(id)arg1 ;
-(void)setParticipants:(id)arg0 toChangeRequest:(id)arg1 ;


@end


#endif