// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIORECORD_H
#define _DPPRIORECORD_H

@class NSString, NSDictionary, NSManagedObjectID, NSData;
@protocol _DPDediscoRecordProtocol, _DPStorageMOConversion, _DPJSONString, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPPrioRecord : NSObject <_DPDediscoRecordProtocol, _DPStorageMOConversion, _DPJSONString, NSSecureCoding>



@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dimension; // ivar: _dimension
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) NSInteger reportVersion; // ivar: _reportVersion
@property (copy, nonatomic) NSData *share1; // ivar: _share1
@property (copy, nonatomic) NSData *share2; // ivar: _share2
@property (nonatomic) BOOL submitted; // ivar: _submitted
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPrioRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 share1:(id)arg1 share2:(id)arg2 dimension:(NSInteger)arg3 metadata:(id)arg4 creationDate:(CGFloat)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif