// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBTELEPHONYDSDSACTIVITYMSG_H
#define PLBBTELEPHONYDSDSACTIVITYMSG_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface PLBBTelephonyDsdsActivityMsg : NSObject

@property (retain) NSString *callStatus; // ivar: _callStatus
@property (retain) NSString *campedRAT; // ivar: _campedRAT
@property (retain) NSString *currentRAT; // ivar: _currentRAT
@property (retain) NSString *preferredRAT; // ivar: _preferredRAT
@property (retain) NSNumber *signalBars; // ivar: _signalBars
@property (retain) NSDate *signalStrengthLogTimestamp; // ivar: _signalStrengthLogTimestamp
@property (retain) NSString *simStatus; // ivar: _simStatus


-(id)init;


@end


#endif