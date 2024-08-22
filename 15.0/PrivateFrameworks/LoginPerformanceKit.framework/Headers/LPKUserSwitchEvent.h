// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPKUSERSWITCHEVENT_H
#define LPKUSERSWITCHEVENT_H

@class NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LPKUserSwitchEvent : NSObject

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSMutableDictionary *signposts; // ivar: _signposts
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)init;


@end


#endif