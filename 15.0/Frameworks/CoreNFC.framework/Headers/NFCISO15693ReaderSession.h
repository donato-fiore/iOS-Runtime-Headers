// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCISO15693READERSESSION_H
#define NFCISO15693READERSESSION_H

@class NSString;
@protocol NFReaderSessionCallbacks;


#import "NFCReaderSession.h"

@interface NFCISO15693ReaderSession : NFCReaderSession <NFReaderSessionCallbacks>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readingAvailable;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 pollMethod:(NSUInteger)arg2 ;
-(id)initWithDelegate:(id)arg0 sessionDelegateType:(NSInteger)arg1 queue:(id)arg2 pollMethod:(NSUInteger)arg3 sessionConfig:(NSUInteger)arg4 ;
-(void)didDetectTags:(id)arg0 connectedTagIndex:(NSUInteger)arg1 ;
-(void)restartPolling;


@end


#endif