// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCLOCKMANAGERINTERFACE_H
#define TSCLOCKMANAGERINTERFACE_H

@class NSString;
@protocol TSClockManagerClient;

#import <Foundation/Foundation.h>

#import "TSClockManager.h"

@interface TSClockManagerInterface : NSObject <TSClockManagerClient>

 {
    *unk _interruptionCallback;
    *void _interruptionRefcon;
}


@property (retain, nonatomic) TSClockManager *clockManager; // ivar: _clockManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addToClockManager;
-(void)interruptedConnectionForClockManager:(id)arg0 ;
-(void)removeFromClockManager;
-(void)setInterruptionCallback:(*unk)arg0 andRefcon:(*void)arg1 ;


@end


#endif