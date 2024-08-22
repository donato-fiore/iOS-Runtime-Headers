// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPNUMERICDATARECORD_H
#define _DPNUMERICDATARECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPNumericDataRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) CGFloat clearNumber; // ivar: _clearNumber
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) CGFloat privateNumber; // ivar: _privateNumber
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (nonatomic) BOOL submitted; // ivar: _submitted


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNumericDataRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 clearNumber:(CGFloat)arg1 privateNumber:(CGFloat)arg2 creationDate:(CGFloat)arg3 submitted:(BOOL)arg4 objectId:(id)arg5 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif