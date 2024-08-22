// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPVECTORTIMESTAMP_H
#define MSPVECTORTIMESTAMP_H

@class NSDictionary, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_timestampValues;
}


@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly, nonatomic, getter=_timestampValues) NSDictionary *timestampValues;


+(BOOL)supportsSecureCoding;
+(id)timestampAfterTimestamps:(id)arg0 increasingClientIdentifier:(id)arg1 ;
-(BOOL)_compare:(id)arg0 comparisonResult:(*NSInteger)arg1 isOppositeCheck:(BOOL)arg2 ;
-(BOOL)compare:(id)arg0 comparisonResult:(*NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 isComparable:(*BOOL)arg1 ;
-(NSUInteger)hash;
-(id)_initWithTimestampValues:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initInitialTimestampWithClientIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)timestampIncreasingClientIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif