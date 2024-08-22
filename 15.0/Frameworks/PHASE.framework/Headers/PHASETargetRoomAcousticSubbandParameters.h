// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASETARGETROOMACOUSTICSUBBANDPARAMETERS_H
#define PHASETARGETROOMACOUSTICSUBBANDPARAMETERS_H


#import <Foundation/Foundation.h>


@interface PHASETargetRoomAcousticSubbandParameters : NSObject

@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) CGFloat earlyRoomEqDb; // ivar: _earlyRoomEqDb
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) CGFloat lateRoomEqDb; // ivar: _lateRoomEqDb
@property (nonatomic) CGFloat rt60; // ivar: _rt60


-(id)init;


@end


#endif