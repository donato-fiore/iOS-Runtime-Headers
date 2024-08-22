// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPERSONCHANGE_H
#define CPLPERSONCHANGE_H

@class NSData, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;


#import "CPLRecordChange.h"

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *contactDescriptor; // ivar: _contactDescriptor
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) NSInteger manualSortOrder; // ivar: _manualSortOrder
@property (copy, nonatomic) NSString *mergeTargetPersonIdentifier; // ivar: _mergeTargetPersonIdentifier
@property (nonatomic) NSInteger personType; // ivar: _personType
@property (nonatomic) NSInteger verifiedType; // ivar: _verifiedType


+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)serverSupportsGraphPeopleHome;
+(BOOL)serverSupportsMergeTargetRef;
+(BOOL)supportsDeletion;
+(BOOL)supportsDirectDeletion;
+(Class)relatedRecordClass;
-(BOOL)validateRecordForTracker:(id)arg0 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg0 ;


@end


#endif