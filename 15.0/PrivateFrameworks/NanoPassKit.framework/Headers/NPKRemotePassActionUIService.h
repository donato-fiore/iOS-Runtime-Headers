// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKREMOTEPASSACTIONUISERVICE_H
#define NPKREMOTEPASSACTIONUISERVICE_H

@class NSString;
@protocol NPKCompanionViewServiceConnectionDelegate, NPKRemotePassActionUIServiceDelegate;

#import <Foundation/Foundation.h>

#import "NPKCompanionViewServiceConnection.h"

@interface NPKRemotePassActionUIService : NSObject <NPKCompanionViewServiceConnectionDelegate>



@property (retain, nonatomic) NPKCompanionViewServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKRemotePassActionUIServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)companionViewServiceConnection:(id)arg0 handleCompanionValueEntryDidCancelForRequestIdentifier:(id)arg1 ;
-(void)companionViewServiceConnection:(id)arg0 handleCompanionValueEntryDidFinishWithCurrencyAmount:(id)arg1 forRequestWithIdentifier:(id)arg2 ;
-(void)presentRemotePassValueEntryViewControllerForRequest:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;


@end


#endif