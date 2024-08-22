// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSLOGGERSTATE_H
#define PAACCESSLOGGERSTATE_H

@class NSCache, NSDictionary;

#import <Foundation/Foundation.h>


@interface PAAccessLoggerState : NSObject

@property (nonatomic) BOOL loggingEnabled; // ivar: _loggingEnabled
@property (readonly, nonatomic) NSCache *negativeAccessCache; // ivar: _negativeAccessCache
@property (readonly, nonatomic) NSDictionary *ongoingAccessIntervals; // ivar: _ongoingAccessIntervals
@property (readonly, nonatomic) NSDictionary *slotByAccessForOngoingAccessInterval; // ivar: _slotByAccessForOngoingAccessInterval
@property (nonatomic) NSInteger topAccessIntervalSlot; // ivar: _topAccessIntervalSlot


-(id)init;
-(id)lookupCurrentAccessForSlot:(id)arg0 ;
-(id)takeOngoingAccessIntervalStateForAccess:(id)arg0 ;
-(id)takeOngoingAccessIntervalStateForSlot:(id)arg0 ;
-(void)setOngoingAccessIntervalState:(id)arg0 forSlot:(id)arg1 ;


@end


#endif