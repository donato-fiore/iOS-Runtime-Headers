// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKOBJECT_H
#define _DKOBJECT_H

@class NSUUID, NSDate, NSString;
@protocol _DKProtobufConverting, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DKSource.h"

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>



@property (retain) NSUUID *UUID; // ivar: _UUID
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDate *localCreationDate; // ivar: _localCreationDate
@property (retain) _DKSource *source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fetchObjectWithUUID:(id)arg0 context:(id)arg1 ;
+(id)fromPBCodable:(id)arg0 ;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
-(BOOL)boolValue;
-(BOOL)copyBaseObjectInfoFromManagedObject:(id)arg0 cache:(id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSInteger)integerValue;
-(NSInteger)typeCode;
-(id)entityName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringValue;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif