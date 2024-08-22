// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNCENGINERECORDMODIFICATION_H
#define CKSYNCENGINERECORDMODIFICATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface CKSyncEngineRecordModification : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)recordModificationsWithOppositeTypeFromRecordModifications:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordID:(id)arg0 type:(NSInteger)arg1 ;
-(id)oppositeTypeModification;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif