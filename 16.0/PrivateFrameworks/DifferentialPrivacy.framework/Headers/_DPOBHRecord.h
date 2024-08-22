// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPOBHRECORD_H
#define _DPOBHRECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPOBHRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (nonatomic) BOOL submitted; // ivar: _submitted


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOBHRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 creationDate:(CGFloat)arg1 submitted:(BOOL)arg2 objectId:(id)arg3 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif