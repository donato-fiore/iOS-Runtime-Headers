// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHSHARERELATIONSHIPCHANGEREQUESTHELPER_H
#define PHSHARERELATIONSHIPCHANGEREQUESTHELPER_H

@class PHObject<PHShare>;


#import "PHRelationshipChangeRequestHelper.h"

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper

@property (weak, nonatomic) PHObject<PHShare> *originalShare; // ivar: _originalShare


-(BOOL)applyMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)_mutableParticipantsObjectIDsAndUUIDs;
-(id)initWithChangeRequestHelper:(id)arg0 ;
-(id)initWithXpcDict:(id)arg0 changeRequestHelper:(id)arg1 ;
-(void)_prepareParticipantsHelperIfNeeded;
-(void)_prepareParticipantsWithFetchResult:(id)arg0 ;
-(void)addParticipants:(id)arg0 toChangeRequest:(id)arg1 ;
-(void)removeParticipants:(id)arg0 toChangeRequest:(id)arg1 ;


@end


#endif