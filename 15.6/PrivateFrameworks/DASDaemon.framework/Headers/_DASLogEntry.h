// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DASLOGENTRY_H
#define _DASLOGENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _DASLogEntry : NSObject

@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *message; // ivar: _message


+(id)logEntryForDate:(id)arg0 category:(id)arg1 message:(id)arg2 ;
-(id)description;


@end


#endif