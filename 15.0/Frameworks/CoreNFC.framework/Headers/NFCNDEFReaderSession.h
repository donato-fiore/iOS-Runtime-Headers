// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCNDEFREADERSESSION_H
#define NFCNDEFREADERSESSION_H

@class NSString;
@protocol NFReaderSessionCallbacks;


#import "NFCReaderSession.h"

@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks>

 {
    BOOL _invalidateAfterFirstRead;
    NSUInteger _tagsRead;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readingAvailable;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 invalidateAfterFirstRead:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 pollMethod:(NSUInteger)arg2 ;
-(id)initWithDelegate:(id)arg0 sessionDelegateType:(NSInteger)arg1 queue:(id)arg2 pollMethod:(NSUInteger)arg3 sessionConfig:(NSUInteger)arg4 ;
-(void)_callbackDidBecomeActive;
-(void)connectToTag:(id)arg0 completionHandler:(id)arg1 ;
-(void)didDetectNDEFMessages:(id)arg0 fromTags:(id)arg1 connectedTagIndex:(NSUInteger)arg2 updateUICallback:(id)arg3 ;
-(void)didTerminate:(id)arg0 ;
-(void)restartPolling;


@end


#endif