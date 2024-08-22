// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMFOUNDATIONCLIENT_H
#define CDMFOUNDATIONCLIENT_H

@class NSString;
@protocol CDMClientDelegate;


#import "CDMClientInterface.h"
#import "CDMServiceCenter.h"
#import "XPCStreamEventRegister.h"

@interface CDMFoundationClient : CDMClientInterface {
    id<CDMClientDelegate> *_delegate;
    CDMServiceCenter *_serviceCenter;
    NSString *_localeIdentifier;
    XPCStreamEventRegister *_eventRegister;
}




+(id)createEmptyNluRequestId;
-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)handleXPCEvent:(id)arg0 fromStream:(id)arg1 ;
-(BOOL)isLighthouseAPIEnabled;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(id)handleableXPCEventStreams;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)doHandleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)doServiceCenterInitWithConfig:(id)arg0 ;
-(void)handleOverridesAssetUpdateEvent:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processCDMNluRequest:(id)arg0 nullableCompletionHandler:(id)arg1 ;
-(void)setup:(id)arg0 ;
-(void)setup:(id)arg0 completionHandler:(id)arg1 ;
-(void)setup:(id)arg0 nullableCompletionHandler:(id)arg1 ;


@end


#endif