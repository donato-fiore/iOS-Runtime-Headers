// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHAGGREGATEFEATURE_H
#define FHAGGREGATEFEATURE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHAggregateFeature : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDate *processingWindowEndDate; // ivar: _processingWindowEndDate
@property (copy, nonatomic) NSDate *processingWindowStartDate; // ivar: _processingWindowStartDate
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif