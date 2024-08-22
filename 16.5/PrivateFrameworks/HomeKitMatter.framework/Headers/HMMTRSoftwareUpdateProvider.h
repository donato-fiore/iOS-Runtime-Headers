// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSOFTWAREUPDATEPROVIDER_H
#define HMMTRSOFTWAREUPDATEPROVIDER_H

@protocol OS_dispatch_queue, HMMTRSoftwareUpdateProviderDelegate;

#import <Foundation/Foundation.h>

#import "HMMTRAccessoryServerBrowser.h"

@interface HMMTRSoftwareUpdateProvider : NSObject

@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (weak) NSObject<HMMTRSoftwareUpdateProviderDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 browser:(id)arg1 ;
-(void)notifyDelegateOfApplyUpdateWithPairing:(id)arg0 requestParams:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyDelegateOfNotifyUpdateWithPairing:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyDelegateOfQueryImageWithPairing:(id)arg0 requestParams:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyUpdateRequestedForNodeID:(id)arg0 ;
-(void)updateOTAProviderStateForNodeID:(id)arg0 otaProviderState:(NSInteger)arg1 ;


@end


#endif