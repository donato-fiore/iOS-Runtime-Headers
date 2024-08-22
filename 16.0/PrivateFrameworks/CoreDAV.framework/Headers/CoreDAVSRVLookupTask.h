// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVSRVLOOKUPTASK_H
#define COREDAVSRVLOOKUPTASK_H

@class NSTimer, NSArray, NSString;
@protocol OS_nw_resolver;


#import "CoreDAVTask.h"

@interface CoreDAVSRVLookupTask : CoreDAVTask {
    NSObject<OS_nw_resolver> *_resolver;
    NSTimer *_timeoutTimer;
}


@property (retain, nonatomic) NSArray *fetchedRecords; // ivar: _fetchedRecords
@property (retain, nonatomic) NSString *serviceString; // ivar: _serviceString


-(id)description;
-(id)initWithServiceString:(id)arg0 ;
-(void)_runOnCallbackThread:(id)arg0 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)handleResolvedEndPoints:(id)arg0 ;
-(void)performCoreDAVTask;


@end


#endif