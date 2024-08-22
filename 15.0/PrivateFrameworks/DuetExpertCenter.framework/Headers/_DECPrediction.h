// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECPREDICTION_H
#define _DECPREDICTION_H

@class NSDate, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_DECPredictionExpiry.h"

@interface _DECPrediction : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) _DECPredictionExpiry *expiry; // ivar: _expiry
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (retain, nonatomic) NSDictionary *reasonMetadata; // ivar: _reasonMetadata


+(BOOL)supportsSecureCoding;
+(id)predictionWithItems:(id)arg0 expiry:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 expiry:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)filterItems:(id)arg0 ;


@end


#endif