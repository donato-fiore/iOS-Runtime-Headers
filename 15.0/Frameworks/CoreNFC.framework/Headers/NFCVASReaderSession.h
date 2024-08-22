// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCVASREADERSESSION_H
#define NFCVASREADERSESSION_H

@class NFTimer, NSArray, NSString;
@protocol NFReaderSessionCallbacks;


#import "NFCReaderSession.h"

@interface NFCVASReaderSession : NFCReaderSession <NFReaderSessionCallbacks>

 {
    NFTimer *_presenceCheckTimer;
    NSArray *_vasConfig;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readingAvailable;
-(id)_convertVASConfigToInternalRequest:(id)arg0 ;
-(id)_convertVASResponseToExternal:(id)arg0 ;
-(id)_sendVASRequests:(id)arg0 error:(*id)arg1 ;
-(id)initWithDelegate:(id)arg0 sessionDelegateType:(NSInteger)arg1 queue:(id)arg2 pollMethod:(NSUInteger)arg3 sessionConfig:(NSUInteger)arg4 ;
-(id)initWithVASCommandConfigurations:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)_callbackDidBecomeActive;
-(void)beginSession;
-(void)dealloc;
-(void)didDetectTags:(id)arg0 connectedTagIndex:(NSUInteger)arg1 ;
-(void)didTerminate:(id)arg0 ;


@end


#endif