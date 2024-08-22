// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIBUTTONITEMSTATE_H
#define SEARCHUIBUTTONITEMSTATE_H

@class NSNumber, SFCommand;

#import <Foundation/Foundation.h>


@interface SearchUIButtonItemState : NSObject

@property (retain, nonatomic) NSNumber *cachedStateValue; // ivar: _cachedStateValue
@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (nonatomic) BOOL isPossiblyAvailable; // ivar: _isPossiblyAvailable


+(id)stateObjectForCommand:(id)arg0 ;
-(void)checkIfAvailable:(id)arg0 ;


@end


#endif