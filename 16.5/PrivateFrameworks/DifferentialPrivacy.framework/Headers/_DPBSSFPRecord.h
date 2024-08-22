// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPBSSFPRECORD_H
#define _DPBSSFPRECORD_H

@class NSString, NSManagedObjectID;
@protocol _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPBSSFPRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (copy, nonatomic) NSString *privateValue; // ivar: _privateValue
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (nonatomic) NSInteger segmentIndex; // ivar: _segmentIndex
@property (nonatomic) BOOL submitted; // ivar: _submitted
@property (copy, nonatomic) NSString *tableVersion; // ivar: _tableVersion
@property (nonatomic) BOOL verificationMode; // ivar: _verificationMode


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBSSFPRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 privateValue:(id)arg1 tableVersion:(id)arg2 segmentIndex:(NSInteger)arg3 verificationMode:(BOOL)arg4 creationDate:(CGFloat)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif