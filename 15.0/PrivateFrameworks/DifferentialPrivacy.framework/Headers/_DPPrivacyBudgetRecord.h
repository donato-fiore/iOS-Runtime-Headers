// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPPRIVACYBUDGETRECORD_H
#define _DPPRIVACYBUDGETRECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>



@property (nonatomic) NSInteger balance; // ivar: _balance
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) CGFloat lastUpdate; // ivar: _lastUpdate
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) BOOL submitted; // ivar: _submitted


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPrivacyBudgetRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 creationDate:(CGFloat)arg1 lastUpdate:(CGFloat)arg2 balance:(NSInteger)arg3 objectId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif