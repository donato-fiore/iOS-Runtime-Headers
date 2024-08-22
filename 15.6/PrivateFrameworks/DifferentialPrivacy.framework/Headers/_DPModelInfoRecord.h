// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPMODELINFORECORD_H
#define _DPMODELINFORECORD_H

@class NSManagedObjectID;
@protocol _DPStorageMOConversion, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>



@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) short majorVersion; // ivar: _majorVersion
@property (nonatomic) short minorVersion; // ivar: _minorVersion
@property (retain, nonatomic) NSManagedObjectID *objectId; // ivar: _objectId
@property (nonatomic) BOOL submitted; // ivar: _submitted


+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg0 ;
+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajorVersion:(short)arg0 minorVersion:(short)arg1 creationDate:(CGFloat)arg2 objectId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif