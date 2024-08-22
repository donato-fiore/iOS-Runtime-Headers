// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCURATIONCONTEXT_H
#define CLSCURATIONCONTEXT_H

@class NSSet, NSDictionary, PHPhotoLibrary, PHUserFeedbackCalculator;

#import <Foundation/Foundation.h>


@interface CLSCurationContext : NSObject {
    NSSet *_verifiedPersonUUIDs;
    NSSet *_hiddenOrBlockedPersonUUIDs;
    NSSet *_nonPetFacedPersonLocalIdentifiers;
    NSDictionary *_personUUIDByMergeCandidateUUID;
}


@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator; // ivar: _userFeedbackCalculator


-(BOOL)_shouldFetchMergeCandidatesForPerson:(id)arg0 ;
-(id)_mergeCandidateUUIDsForPerson:(id)arg0 ;
-(id)description;
-(id)hiddenOrBlockedPersonUUIDs;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithUserFeedbackCalculator:(id)arg0 ;
-(id)nonPetFacedPersonLocalIdentifiers;
-(id)personUUIDByMergeCandidateUUID;
-(id)verifiedPersonUUIDs;
-(void)_loadNonPetFacedPersonLocalIdentifiers;
-(void)_loadPersonAndMergeCandidateUUIDs;


@end


#endif