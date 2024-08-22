// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLFACECROPCHANGE_H
#define CPLFACECROPCHANGE_H

@class NSString, NSData;


#import "CPLRecordChange.h"

@interface CPLFaceCropChange : CPLRecordChange

@property (nonatomic) NSInteger faceCropType; // ivar: _faceCropType
@property (copy, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (copy, nonatomic) NSString *rejectedPersonIdentifier; // ivar: _rejectedPersonIdentifier
@property (copy, nonatomic) NSData *resourceData; // ivar: _resourceData


+(Class)relatedRecordClass;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(BOOL)validateChangeWithError:(*id)arg0 ;
-(BOOL)validateFullRecord;
-(id)personScopedIdentifier;
-(id)propertiesDescription;
-(id)relatedIdentifier;
-(void)setPersonScopedIdentifier:(id)arg0 ;
-(void)setRelatedIdentifier:(id)arg0 ;


@end


#endif