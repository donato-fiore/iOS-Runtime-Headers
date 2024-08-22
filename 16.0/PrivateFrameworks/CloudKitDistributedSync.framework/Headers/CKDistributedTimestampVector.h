// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISTRIBUTEDTIMESTAMPVECTOR_H
#define CKDISTRIBUTEDTIMESTAMPVECTOR_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableArray *timestampArray; // ivar: _timestampArray


+(BOOL)supportsSecureCoding;
-(BOOL)_isGreaterThanOrEqualToTimestamp:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareToTimestampVector:(id)arg0 ;
-(NSInteger)indexForTimestampForSiteIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timestampCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestampClockVector:(id)arg0 fillingInGaps:(BOOL)arg1 ;
-(id)initWithTimestamps:(id)arg0 ;
-(id)minimalTimestampWith:(id)arg0 ;
-(id)sequentialSiteIdentifiers;
-(id)timestampAtIndex:(NSUInteger)arg0 ;
-(id)timestampForSiteIdentifier:(id)arg0 ;
-(id)timestamps;
-(void)addTimestamp:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif