// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDGLANCELINGEREVENT_H
#define CDGLANCELINGEREVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface CDGlanceLingerEvent : NSObject

@property (retain) NSString *bundle; // ivar: _bundle
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate


-(id)description;


@end


#endif