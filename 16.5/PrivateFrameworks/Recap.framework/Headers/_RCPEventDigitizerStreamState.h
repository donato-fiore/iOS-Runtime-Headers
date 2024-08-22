// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RCPEVENTDIGITIZERSTREAMSTATE_H
#define _RCPEVENTDIGITIZERSTREAMSTATE_H


#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"

@interface _RCPEventDigitizerStreamState : NSObject

@property (readonly, nonatomic) NSInteger countOfContactsChangeAmount; // ivar: _countOfContactsChangeAmount
@property (nonatomic) NSInteger countOfContactsTouching; // ivar: _countOfContactsTouching
@property (nonatomic) BOOL countOfContactsTouchingDidChange; // ivar: _countOfContactsTouchingDidChange
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (nonatomic) NSInteger eventNumber; // ivar: _eventNumber
@property (nonatomic) CGFloat streamStartTimeInterval; // ivar: _streamStartTimeInterval
@property (nonatomic) CGFloat timeIntervalSinceStreamStart; // ivar: _timeIntervalSinceStreamStart


+(id)streamStateWithEnvironment:(id)arg0 ;
-(void)ingestEvent:(id)arg0 ;


@end


#endif