// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCHARACTERISTICMETADATA_H
#define HMCHARACTERISTICMETADATA_H

@class NSString, NSNumber, NSUUID, NSArray;
@protocol NSSecureCoding, HMObjectMerge, NSCopying;

#import <Foundation/Foundation.h>


@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge, NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *manufacturerDescription; // ivar: _manufacturerDescription
@property (retain, nonatomic) NSNumber *maxLength; // ivar: _maxLength
@property (retain, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (retain, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSString *units; // ivar: _units
@property (copy, nonatomic) NSArray *validValues; // ivar: _validValues


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif