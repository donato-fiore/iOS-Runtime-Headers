// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPCLIPUSAGEDUETCONTEXTUPDATELISTENER_H
#define ATXAPPCLIPUSAGEDUETCONTEXTUPDATELISTENER_H

@protocol ATXAppClipLaunchListenerProtocol;

#import <Foundation/Foundation.h>


@interface ATXAppClipUsageDuetContextUpdateListener : NSObject <ATXAppClipLaunchListenerProtocol>



@property (readonly, nonatomic) id *appClipUsageHandler; // ivar: _appClipUsageHandler


// -(void)startListeningWithCallback:(id)arg0 clientId:(unk)arg1  ;
-(void)startListeningWithClientId:(id)arg0 ;


@end


#endif