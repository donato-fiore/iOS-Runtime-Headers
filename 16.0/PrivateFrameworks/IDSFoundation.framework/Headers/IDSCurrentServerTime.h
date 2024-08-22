// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCURRENTSERVERTIME_H
#define IDSCURRENTSERVERTIME_H

@class CUTDeferredTaskQueue;
@protocol IDSCurrentServerTimeProvider;

#import <Foundation/Foundation.h>

#import "IDSCurrentServerTimePair.h"

@interface IDSCurrentServerTime : NSObject

@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask; // ivar: _refreshServerTimeTask
@property (retain, nonatomic) NSObject<IDSCurrentServerTimeProvider> *serverTimeProvider; // ivar: _serverTimeProvider
@property (retain) IDSCurrentServerTimePair *timePair; // ivar: _timePair


+(id)sharedInstance;
-(CGFloat)_refreshTimeInterval;
-(CGFloat)currentServerTimeInterval;
-(id)currentServerTimeDate;
-(id)initWithServerTimeProvider:(id)arg0 ;
-(void)_refreshServerTime;
-(void)_storeCurrentTime;
-(void)_storeInitialServerTimeIfNeeded;


@end


#endif