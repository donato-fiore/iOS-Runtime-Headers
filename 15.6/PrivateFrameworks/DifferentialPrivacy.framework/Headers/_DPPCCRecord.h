// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPCCRECORD_H
#define _DPPCCRECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPPCCRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (nonatomic) BOOL submitted; // ivar: _submitted
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPCCRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 creationDate:(CGFloat)arg2 submitted:(BOOL)arg3 objectId:(id)arg4 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif