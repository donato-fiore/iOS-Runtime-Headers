// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER11READVASTASK_H
#define _TTC13SOFTPOSREADER11READVASTASK_H

@class NSOperation;
@protocol NFSecureElementReaderSessionDelegate;



@interface _TtC13SoftPosReader11ReadVasTask : NSOperation <NFSecureElementReaderSessionDelegate>

 {
    ? _isExecuting;
    ? _isFinished;
    ? lock;
    ? readParams;
    ? callback;
    ? vasResponse;
    ? vasURLOK;
    ? vasDataFound;
    ? skipLoyalty;
    ? paymentDataForthcoming;
    ? vasError;
    ? nfSeReaderSession;
    ? tags;
    ? queue;
    ? caLogger;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)readerSession:(id)arg0 didEnd:(id)arg1 ;
-(void)readerSession:(id)arg0 didReceiveThermalIndication:(BOOL)arg1 ;
-(void)readerSession:(id)arg0 didStart:(id)arg1 ;
-(void)secureElementReaderSessionDidEndUnexpectedly:(id)arg0 ;
-(void)start;


@end


#endif