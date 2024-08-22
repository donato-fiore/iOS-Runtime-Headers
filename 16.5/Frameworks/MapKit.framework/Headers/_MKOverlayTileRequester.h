// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKOVERLAYTILEREQUESTER_H
#define _MKOVERLAYTILEREQUESTER_H

@class GEOTileRequester, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;



@interface _MKOverlayTileRequester : GEOTileRequester {
    BOOL _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
    NSObject<OS_dispatch_queue> *_workQueue;
}




+(unsigned char)tileProviderIdentifier;
+(unsigned int)registerDataSource:(id)arg0 ;
+(void)unregisterDataSource:(unsigned int)arg0 ;
-(BOOL)isRunning;
-(id)initWithTileRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 ;
-(void)_cleanup;
-(void)_doWorkOrFinish;
-(void)_operationFailed:(id)arg0 error:(id)arg1 ;
-(void)_operationFinished:(id)arg0 ;
-(void)_startOnWorkQueue;
-(void)cancel;
-(void)cancelKey:(struct _GEOTileKey *)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif