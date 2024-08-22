// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCTAGREADERSESSION_H
#define NFCTAGREADERSESSION_H

@class NSString;
@protocol NFReaderSessionCallbacks, NFCTag;


#import "NFCReaderSession.h"

@interface NFCTagReaderSession : NFCReaderSession <NFReaderSessionCallbacks>

 {
    id *_swiftDelegateWrapper;
}


@property (readonly, retain, nonatomic) NSObject<NFCTag> *connectedTag; // ivar: _connectedTag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readingAvailable;
-(id)initWithDelegate:(id)arg0 sessionDelegateType:(NSInteger)arg1 queue:(id)arg2 pollMethod:(NSUInteger)arg3 sessionConfig:(NSUInteger)arg4 ;
-(id)initWithPollingOption:(NSInteger)arg0 delegate:(id)arg1 delegateType:(NSInteger)arg2 queue:(id)arg3 ;
-(id)initWithPollingOption:(NSInteger)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithPollingOption:(NSInteger)arg0 swiftDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_callbackDidBecomeActive;
-(void)connectToTag:(id)arg0 completionHandler:(id)arg1 ;
-(void)didDetectTags:(id)arg0 connectedTagIndex:(NSUInteger)arg1 ;
-(void)restartPolling;


@end


#endif