// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCHRONOAPPLICATIONPROCESSSTATEOBSERVER_H
#define SBCHRONOAPPLICATIONPROCESSSTATEOBSERVER_H

@class CHSApplicationProcessStateChangeConsumer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBIconController.h"

@interface SBChronoApplicationProcessStateObserver : NSObject

@property (readonly, nonatomic) CHSApplicationProcessStateChangeConsumer *chronoConsumer; // ivar: _chronoConsumer
@property (readonly, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithIconController:(id)arg0 ;
-(void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)arg0 ;
-(void)applicationProcessStateDidChange:(id)arg0 ;


@end


#endif