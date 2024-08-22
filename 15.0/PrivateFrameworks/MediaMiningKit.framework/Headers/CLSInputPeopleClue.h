// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSINPUTPEOPLECLUE_H
#define CLSINPUTPEOPLECLUE_H

@class PHPhotoLibrary;


#import "CLSInputClue.h"
#import "CLSPersonIdentity.h"

@interface CLSInputPeopleClue : CLSInputClue

@property (nonatomic) BOOL includeMergeCandidates; // ivar: _includeMergeCandidates
@property (nonatomic) NSUInteger numberOfFaces; // ivar: _numberOfFaces
@property (retain, nonatomic) CLSPersonIdentity *person; // ivar: _person
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(id)clueWithConsolidatedPersonLocalIdentifier:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)clueWithPeople:(id)arg0 ;
+(id)clueWithPersonLocalIdentifier:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)cluesWithConsolidatedPersonLocalIdentifiers:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)cluesWithPeoples:(id)arg0 ;
+(id)cluesWithPersonLocalIdentifiers:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg0 ;
-(id)description;
-(id)name;
-(void)_prepareWithProgressBlock:(id)arg0 ;


@end


#endif