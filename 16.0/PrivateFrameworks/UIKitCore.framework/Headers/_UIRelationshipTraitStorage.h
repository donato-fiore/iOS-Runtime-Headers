// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRELATIONSHIPTRAITSTORAGE_H
#define _UIRELATIONSHIPTRAITSTORAGE_H

@class UITraitStorage, NSOrderedSet;



@interface _UIRelationshipTraitStorage : UITraitStorage {
    NSOrderedSet *_relationshipCandidates;
}




-(id)_propertyDescriptionString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 relationshipCandidates:(id)arg2 ;
-(void)addRecordWithTraitCollection:(id)arg0 addedObjects:(id)arg1 removedObjects:(id)arg2 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif