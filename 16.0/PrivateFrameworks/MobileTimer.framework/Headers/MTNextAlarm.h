// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTNEXTALARM_H
#define MTNEXTALARM_H

@class NSURL, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MTNextAlarm : NSObject

@property (readonly, copy, nonatomic) NSURL *clockAppSectionURL;
@property (copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isSleepAlarm; // ivar: _isSleepAlarm
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;


@end


#endif