// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNDISPLAYETALEGINFO_H
#define MNDISPLAYETALEGINFO_H

@class NSDate, NSTimeZone, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNDisplayETALegInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *eta; // ivar: _eta
@property (nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (nonatomic) NSUInteger remainingMinutes; // ivar: _remainingMinutes
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSUUID *waypointID; // ivar: _waypointID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif