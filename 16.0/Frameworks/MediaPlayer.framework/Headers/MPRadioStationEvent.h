// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPRADIOSTATIONEVENT_H
#define MPRADIOSTATIONEVENT_H

@class NSString, NSDate;
@protocol MPMutableRadioStationEvent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPRadioStationEvent : NSObject <MPMutableRadioStationEvent, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (copy, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif