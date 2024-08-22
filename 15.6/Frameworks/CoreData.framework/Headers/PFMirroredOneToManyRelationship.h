// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMIRROREDONETOMANYRELATIONSHIP_H
#define PFMIRROREDONETOMANYRELATIONSHIP_H

@class CKRecordID;


#import "PFMirroredRelationship.h"
#import "NSRelationshipDescription.h"

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_relatedRecordID;
    CKRecordID *_recordID;
}




-(BOOL)updateRelationshipValueUsingImportContext:(id)arg0 andManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithManagedObject:(id)arg0 withRecordName:(id)arg1 relatedToRecordWithRecordName:(id)arg2 byRelationship:(id)arg3 ;
-(void)dealloc;


@end


#endif