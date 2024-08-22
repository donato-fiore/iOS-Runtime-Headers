// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHEARNEDINSTANCE_H
#define ACHEARNEDINSTANCE_H

@class NSDate, NSDateComponents, NSString, HKQuantity;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding>

 {
    ? _packedEarnedDateComponents;
    NSUInteger _uniqueNameIndex;
}


@property (retain, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (retain, nonatomic) NSDateComponents *earnedDateComponents;
@property (nonatomic) NSUInteger key; // ivar: _key
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) HKQuantity *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_allTemplateUniqueNames;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareEarnedDateWithEarnedInstance:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCodable:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif