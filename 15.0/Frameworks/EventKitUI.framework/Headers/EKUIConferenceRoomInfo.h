// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUICONFERENCEROOMINFO_H
#define EKUICONFERENCEROOMINFO_H

@class EKRequestAvailabilityOperation, NSArray;

#import <Foundation/Foundation.h>


@interface EKUIConferenceRoomInfo : NSObject

@property (retain, nonatomic) EKRequestAvailabilityOperation *availabilityRequest; // ivar: _availabilityRequest
@property (retain, nonatomic) NSArray *availabilitySpans; // ivar: _availabilitySpans
@property NSInteger availabilityType; // ivar: _availabilityType


-(id)init;


@end


#endif