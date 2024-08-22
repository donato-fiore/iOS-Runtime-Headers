// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CROBJECT_H
#define CROBJECT_H

@class NSString, NSDictionary, NSUUID;
@protocol CRDataType, CREquatable, CRIdentifiable, CRCoding;

#import <Foundation/Foundation.h>


@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *fields; // ivar: _fields
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly) Class superclass;


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(id)CRProperties;
+(id)keyFromSelector:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 fields:(id)arg1 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setFieldKey:(id)arg0 value:(id)arg1 ;
-(void)setupConstraintsFor:(id)arg0 in:(id)arg1 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif