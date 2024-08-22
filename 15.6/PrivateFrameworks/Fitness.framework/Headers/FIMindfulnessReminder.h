// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIMINDFULNESSREMINDER_H
#define FIMINDFULNESSREMINDER_H

@class NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FIMindfulnessReminder : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDateComponents *customDateComponents; // ivar: _customDateComponents
@property (readonly, nonatomic) NSUInteger customWeekdaySelection; // ivar: _customWeekdaySelection
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 customDateComponents:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 customDateComponents:(id)arg1 customWeekdaySelection:(NSUInteger)arg2 enabled:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif