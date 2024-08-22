// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLOCATIONOFINTERESTVISIT_H
#define PLLOCATIONOFINTERESTVISIT_H

@class NSUUID, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PLLocationOfInterest.h"

@interface PLLocationOfInterestVisit : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (weak, nonatomic) PLLocationOfInterest *locationOfInterest; // ivar: _locationOfInterest
@property (readonly, nonatomic) NSDateInterval *visitInterval; // ivar: _visitInterval


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 visitInterval:(id)arg1 confidence:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif