// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYCOMPONENTNAMEPROVIDER_H
#define HDONTOLOGYCOMPONENTNAMEPROVIDER_H


#import <Foundation/Foundation.h>


@interface HDOntologyComponentNameProvider : NSObject



+(BOOL)_conceptIdentifiersFollowingFormOfRelationshipForNodeWithIdentifier:(id)arg0 ontologyTransaction:(id)arg1 conceptIdentifierOut:(*id)arg2 deletedFormOfRelationshipVersionOut:(*NSInteger)arg3 error:(*id)arg4 ;
+(id)_componentNamesFromClinicalProductConceptWithIdentifier:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(id)_componentNamesFromClinicalProductIdentifiers:(id)arg0 deletedRelationshipVersion:(NSInteger)arg1 ontologyTransaction:(id)arg2 error:(*id)arg3 ;
+(id)_conceptIdentifiersFollowingMultipleComponentRelationshipsForNodeWithIdentifier:(id)arg0 ontologyTransaction:(id)arg1 maximumComponentDeletedRelationshipVersionOut:(*NSInteger)arg2 error:(*id)arg3 ;
+(id)componentNamesForConceptWithIdentifier:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;


@end


#endif