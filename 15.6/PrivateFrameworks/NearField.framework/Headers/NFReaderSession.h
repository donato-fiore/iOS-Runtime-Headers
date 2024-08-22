// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFREADERSESSION_H
#define NFREADERSESSION_H

@class NSString;
@protocol NFReaderSessionCallbacks, NFReaderSessionDelegate;


#import "NFSession.h"
#import "NFTag.h"

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks>

 {
    NFTag *_connectedTag;
    id<NFReaderSessionDelegate> *_delegate;
}


@property (readonly) NSInteger actionSheetUI; // ivar: _actionSheetUI
@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_disconnectTagWithCardRemoval:(BOOL)arg0 outError:(*id)arg1 ;
-(BOOL)checkNdefSupportsRead:(*BOOL)arg0 andWrite:(*BOOL)arg1 ;
-(BOOL)checkNdefSupportsRead:(*BOOL)arg0 andWrite:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)checkPresence;
-(BOOL)checkPresenceWithError:(*id)arg0 ;
-(BOOL)connectTag:(id)arg0 ;
-(BOOL)connectTag:(id)arg0 error:(*id)arg1 ;
-(BOOL)disconnectTag;
-(BOOL)disconnectTagWithCardRemoval:(*id)arg0 ;
-(BOOL)disconnectTagWithError:(*id)arg0 ;
-(BOOL)formatNdefWithKey:(id)arg0 ;
-(BOOL)formatNdefWithKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)ndefWrite:(id)arg0 ;
-(BOOL)ndefWrite:(id)arg0 error:(*id)arg1 ;
-(BOOL)setECPPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPollingProfile:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)startPolling;
-(BOOL)startPollingForTechnology:(unsigned int)arg0 ;
-(BOOL)startPollingForTechnology:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)startPollingWithError:(*id)arg0 ;
-(BOOL)stopPolling;
-(BOOL)stopPollingWithError:(*id)arg0 ;
-(id)felicaRequestService:(id)arg0 error:(*id)arg1 ;
-(id)felicaRequestService:(id)arg0 forSystemCode:(id)arg1 error:(*id)arg2 ;
-(id)felicaState;
-(id)felicaStateForSystemCode:(id)arg0 withRequestService:(id)arg1 withBlockReadList:(id)arg2 performSearchServiceCode:(BOOL)arg3 ;
-(id)felicaStateForSystemCode:(id)arg0 withRequestService:(id)arg1 withBlockReadList:(id)arg2 performSearchServiceCode:(BOOL)arg3 error:(*id)arg4 ;
-(id)felicaStateWithError:(*id)arg0 ;
-(id)initWithUIType:(NSInteger)arg0 ;
-(id)ndefRead;
-(id)ndefReadWithError:(*id)arg0 ;
-(id)performVAS:(id)arg0 error:(*id)arg1 ;
-(id)skipMifareClassification;
-(id)transceive:(id)arg0 ;
-(id)transceive:(id)arg0 error:(*id)arg1 ;
-(id)updateUIAlertMessage:(id)arg0 ;
-(unsigned int)runScript:(id)arg0 parameters:(id)arg1 results:(*id)arg2 ;
-(void)didDetectExternalReaderWithNotification:(id)arg0 ;
-(void)didDetectNDEFMessages:(id)arg0 fromTags:(id)arg1 connectedTagIndex:(NSUInteger)arg2 updateUICallback:(id)arg3 ;
-(void)didDetectTags:(id)arg0 connectedTagIndex:(NSUInteger)arg1 ;
-(void)didEndUnexpectedly;
-(void)didTerminate:(id)arg0 ;
-(void)didUIControllerInvalidate:(id)arg0 ;
-(void)endSession;


@end


#endif