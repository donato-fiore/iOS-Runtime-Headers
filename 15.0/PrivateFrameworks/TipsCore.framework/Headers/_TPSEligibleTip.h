// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TPSELIGIBLETIP_H
#define _TPSELIGIBLETIP_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _TPSEligibleTip : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastEligibleDate; // ivar: _lastEligibleDate
@property (readonly, copy, nonatomic) NSDate *lastOfferedDate; // ivar: _lastOfferedDate
@property (readonly, nonatomic) BOOL overrideFrequencyControl; // ivar: _overrideFrequencyControl


-(NSInteger)compare:(id)arg0 ;
-(NSInteger)eligibleDateCompare:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithIdentifier:(id)arg0 lastEligibileDate:(id)arg1 lastOfferedDate:(id)arg2 overrideFrequencyControl:(BOOL)arg3 ;


@end


#endif