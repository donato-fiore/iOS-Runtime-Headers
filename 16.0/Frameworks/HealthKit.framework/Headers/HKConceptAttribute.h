// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCONCEPTATTRIBUTE_H
#define HKCONCEPTATTRIBUTE_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) NSInteger longLongValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 boolValue:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 numberValue:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 version:(NSInteger)arg2 deleted:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif