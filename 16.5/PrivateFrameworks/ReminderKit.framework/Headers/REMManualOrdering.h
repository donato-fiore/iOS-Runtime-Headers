// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMMANUALORDERING_H
#define REMMANUALORDERING_H

@class NSString, NSDate, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *listID; // ivar: _listID
@property (readonly, nonatomic) short listType; // ivar: _listType
@property (readonly, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSDictionary *secondaryLevelElementIDsByTopLevelElementID; // ivar: _secondaryLevelElementIDsByTopLevelElementID
@property (readonly, nonatomic) NSArray *topLevelElementIDs; // ivar: _topLevelElementIDs
@property (readonly, nonatomic) REMObjectID *uncommitedElementsAccountID; // ivar: _uncommitedElementsAccountID


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)changedKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 listType:(short)arg1 listID:(id)arg2 modifiedDate:(id)arg3 ;
-(id)initWithObjectID:(id)arg0 listType:(short)arg1 listID:(id)arg2 topLevelElementIDs:(id)arg3 secondaryLevelElementIDsByTopLevelElementID:(id)arg4 uncommitedElementsAccountID:(id)arg5 modifiedDate:(id)arg6 ;
-(id)remObjectID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif