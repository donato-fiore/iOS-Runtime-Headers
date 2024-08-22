// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTTAP_H
#define DTTAP_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DTTapConfig.h"
#import "DTTapMemoHandler.h"

@interface DTTap : NSObject

@property (readonly, retain, nonatomic) DTTapConfig *config; // ivar: _config
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (readonly, retain, nonatomic) DTTapMemoHandler *memoHandler; // ivar: _memoHandler
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) unsigned int tapID; // ivar: _tapID
@property (readonly, retain, nonatomic) NSString *uuid;


-(BOOL)_canFetchWhileArchiving;
-(id)_fetchDataForReason:(NSUInteger)arg0 ;
-(id)fetchDataNow;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 memoHandler:(id)arg1 ;
-(id)pause;
-(id)start;
-(id)stop;
-(id)unpause;
-(void)_pause;
-(void)_start;
-(void)_stop;
-(void)_unpause;
-(void)resumeDataProcessing;
-(void)suspendDataProcessing;


@end


#endif