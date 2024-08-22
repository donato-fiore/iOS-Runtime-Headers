// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CELLOUTRANKFORCESPIHANDLER_H
#define CELLOUTRANKFORCESPIHANDLER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CellOutrankForceSPIHandler : NSObject {
    NSObject<OS_dispatch_source> *_forcePreferCellOverWiFiTimer;
}


@property (nonatomic) BOOL cellOutrankForcedViaSPI; // ivar: _cellOutrankForcedViaSPI
@property (nonatomic) CGFloat cellOutrankForcedViaSPIUntil; // ivar: _cellOutrankForcedViaSPIUntil
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)deletePreferCellOverWiFiSettings;
-(void)handlePreferCellOverWiFi:(BOOL)arg0 until:(CGFloat)arg1 updateDB:(BOOL)arg2 ;
-(void)setForcePreferCellOverWiFi:(BOOL)arg0 autoDisableTimestamp:(CGFloat)arg1 ;


@end


#endif