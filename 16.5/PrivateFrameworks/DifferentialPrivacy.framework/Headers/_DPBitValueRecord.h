// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPBITVALUERECORD_H
#define _DPBITVALUERECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPBitValueRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) short clearBitValue; // ivar: _clearBitValue
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (copy, nonatomic) NSString *privateBitValueStr; // ivar: _privateBitValueStr
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (nonatomic) BOOL submitted; // ivar: _submitted


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBitValueRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 clearBitValue:(short)arg1 privateBitValueStr:(id)arg2 creationDate:(CGFloat)arg3 submitted:(BOOL)arg4 objectId:(id)arg5 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif