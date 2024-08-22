// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLARCHIVEJOB_H
#define PLARCHIVEJOB_H

@protocol PLArchiveJobManager;

#import <Foundation/Foundation.h>

#import "PLArchiveEntry.h"
#import "PLTimer.h"

@interface PLArchiveJob : NSObject

@property (retain) PLArchiveEntry *archiveEntry; // ivar: _archiveEntry
@property (retain) NSObject<PLArchiveJobManager> *manager; // ivar: _manager
@property (nonatomic) NSUInteger numAttempts;
@property (nonatomic) NSInteger stage;
@property (retain) PLTimer *watchdog; // ivar: _watchdog


+(SEL)recoverSelectorForStage:(NSInteger)arg0 ;
+(SEL)runSelectorForStage:(NSInteger)arg0 ;
+(id)storageQueue;
-(id)initWithManager:(id)arg0 andArchiveEntry:(id)arg1 ;
-(void)recover;
-(void)recoverCompress;
-(void)recoverCopy;
-(void)recoverTrim;
-(void)run;
-(void)startWatchdog;
-(void)stopWatchdog;


@end


#endif