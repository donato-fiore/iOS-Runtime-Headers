// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLAWDAVAILABLESESSIONSTRACKER_H
#define PMLAWDAVAILABLESESSIONSTRACKER_H

@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;


#import "PMLAWDBaseTracker.h"

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> *_delegate;
    AWDServerConnection *_awdServerConnection;
}




-(id)init;
-(id)initWithAWDConnection:(id)arg0 ;
-(void)reportStatsToAWD;
-(void)setAWDMetricQueryDelegate:(id)arg0 ;


@end


#endif