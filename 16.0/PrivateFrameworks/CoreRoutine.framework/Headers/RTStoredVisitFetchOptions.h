// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTSTOREDVISITFETCHOPTIONS_H
#define RTSTOREDVISITFETCHOPTIONS_H

@class NSNumber, NSDateInterval, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSNumber *confidence; // ivar: _confidence
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL labelVisit; // ivar: _labelVisit
@property (readonly, nonatomic) NSNumber *limit; // ivar: _limit
@property (readonly, nonatomic) NSSet *sources; // ivar: _sources


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFetchOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAscending:(BOOL)arg0 confidence:(id)arg1 dateInterval:(id)arg2 labelVisit:(BOOL)arg3 limit:(id)arg4 ;
-(id)initWithAscending:(BOOL)arg0 confidence:(id)arg1 dateInterval:(id)arg2 labelVisit:(BOOL)arg3 limit:(id)arg4 sources:(id)arg5 ;
-(id)initWithAscending:(BOOL)arg0 confidence:(id)arg1 dateInterval:(id)arg2 limit:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif