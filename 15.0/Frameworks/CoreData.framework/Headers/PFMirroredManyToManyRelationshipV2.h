// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFMIRROREDMANYTOMANYRELATIONSHIPV2_H
#define PFMIRROREDMANYTOMANYRELATIONSHIPV2_H



#import "PFMirroredManyToManyRelationship.h"

@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship



+(BOOL)_isValidMirroredRelationshipRecord:(id)arg0 values:(id)arg1 ;
-(id)initWithRecord:(id)arg0 andValues:(id)arg1 withManagedObjectModel:(id)arg2 andType:(NSUInteger)arg3 ;
-(id)initWithRecordID:(id)arg0 forRecordWithID:(id)arg1 relatedToRecordWithID:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4 andType:(NSUInteger)arg5 ;
-(void)populateRecordValues:(id)arg0 ;


@end


#endif