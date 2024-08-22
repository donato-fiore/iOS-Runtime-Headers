// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSUGGESTIONCHANGE_H
#define CPLSUGGESTIONCHANGE_H

@class NSData, NSDate, NSString;


#import "CPLRecordChange.h"
#import "CPLSuggestionRecordList.h"

@interface CPLSuggestionChange : CPLRecordChange

@property (copy, nonatomic) NSData *actionData; // ivar: _actionData
@property (copy, nonatomic) NSDate *activationDate; // ivar: _activationDate
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDate *expungeDate; // ivar: _expungeDate
@property (copy, nonatomic) NSData *featuresData; // ivar: _featuresData
@property (nonatomic) unsigned short notificationState; // ivar: _notificationState
@property (copy, nonatomic) CPLSuggestionRecordList *recordList; // ivar: _recordList
@property (copy, nonatomic) NSDate *relevantUntilDate; // ivar: _relevantUntilDate
@property (nonatomic) unsigned short state; // ivar: _state
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) unsigned short subtype; // ivar: _subtype
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) unsigned short type; // ivar: _type
@property (nonatomic) NSInteger version; // ivar: _version


+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_createTestSuggestionWithKeyAssets:(id)arg0 representativeAssets:(id)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesDescription;
-(id)scopedIdentifiersForMapping;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif