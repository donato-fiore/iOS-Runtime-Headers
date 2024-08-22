// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOVEPERSONACTION_H
#define PXMOVEPERSONACTION_H

@class NSArray, PHPerson, NSNumber;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"
#import "PXPhotoLibraryLocalDefaults.h"

@interface PXMovePersonAction : PXPhotosAction

@property (readonly, nonatomic) NSInteger destinationIndex; // ivar: _destinationIndex
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *destinationPeople; // ivar: _destinationPeople
@property (readonly, nonatomic) NSInteger destinationType; // ivar: _destinationType
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults; // ivar: _localDefaults
@property (copy, nonatomic) NSArray *modifiedDestinationPeople; // ivar: _modifiedDestinationPeople
@property (copy, nonatomic) NSArray *modifiedOtherPeople; // ivar: _modifiedOtherPeople
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *otherPeople; // ivar: _otherPeople
@property (readonly, nonatomic) PHPerson *sourcePerson; // ivar: _sourcePerson
@property (retain, nonatomic) NSNumber *sourceSortingType; // ivar: _sourceSortingType


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithSourcePerson:(id)arg0 destinationPeople:(id)arg1 destinationIndex:(NSInteger)arg2 destinationType:(NSInteger)arg3 otherPeople:(id)arg4 ;
-(void)changeRequestForUndo:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif