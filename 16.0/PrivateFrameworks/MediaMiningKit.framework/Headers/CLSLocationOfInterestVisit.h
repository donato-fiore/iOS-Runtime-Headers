// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSLOCATIONOFINTERESTVISIT_H
#define CLSLOCATIONOFINTERESTVISIT_H

@class NSUUID, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLSLocationOfInterest.h"

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (weak, nonatomic) CLSLocationOfInterest *locationOfInterest; // ivar: _locationOfInterest
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