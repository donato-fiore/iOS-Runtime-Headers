// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDPSIMPLEDATAPOINT_H
#define _CDPSIMPLEDATAPOINT_H

@class NSString, NSArray, NSDate;
@protocol _CDPDataPoint;

#import <Foundation/Foundation.h>


@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *peopleIdentifiers; // ivar: _peopleIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL userIsSender; // ivar: _userIsSender
@property (nonatomic) BOOL userIsThreadInitiator; // ivar: _userIsThreadInitiator




@end


#endif