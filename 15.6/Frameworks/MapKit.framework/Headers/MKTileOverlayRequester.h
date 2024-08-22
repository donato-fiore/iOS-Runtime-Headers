// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTILEOVERLAYREQUESTER_H
#define MKTILEOVERLAYREQUESTER_H

@class GEOTileRequester, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;



@interface MKTileOverlayRequester : GEOTileRequester {
    BOOL _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
    NSObject<OS_dispatch_queue> *_workQueue;
}




+(unsigned char)tileProviderIdentifier;
+(unsigned int)registerOverlay:(id)arg0 ;
+(void)unregisterOverlay:(unsigned int)arg0 ;
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