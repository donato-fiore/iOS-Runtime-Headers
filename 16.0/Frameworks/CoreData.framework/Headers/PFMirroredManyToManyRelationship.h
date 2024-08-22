// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMIRROREDMANYTOMANYRELATIONSHIP_H
#define PFMIRROREDMANYTOMANYRELATIONSHIP_H

@class CKRecordID, NSString;


#import "PFMirroredRelationship.h"
#import "NSRelationshipDescription.h"

@interface PFMirroredManyToManyRelationship : PFMirroredRelationship {
    NSUInteger _type;
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_manyToManyRecordID;
    NSString *_manyToManyRecordType;
    CKRecordID *_ckRecordID;
    CKRecordID *_relatedCKRecordID;
}




+(BOOL)_isValidMirroredRelationshipRecord:(id)arg0 values:(id)arg1 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg0 andManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithRecordID:(id)arg0 recordType:(id)arg1 managedObjectModel:(id)arg2 andType:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif