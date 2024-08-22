// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBBRIDGEIDSMESSAGEINSTANCE_H
#define PBBRIDGEIDSMESSAGEINSTANCE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface PBBridgeIDSMessageInstance : NSObject

@property (copy, nonatomic) id *retryAction; // ivar: _retryAction
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (nonatomic) CGFloat retryInterval; // ivar: _retryInterval
@property (retain, nonatomic) NSNumber *sentAbsoluteTime; // ivar: _sentAbsoluteTime
@property (nonatomic) unsigned short typeID; // ivar: _typeID


+(id)newMessageInstanceOfType:(unsigned short)arg0 retryCount:(NSInteger)arg1 retryInterval:(CGFloat)arg2 withAction:(id)arg3 ;
-(id)description;
-(id)init;


@end


#endif