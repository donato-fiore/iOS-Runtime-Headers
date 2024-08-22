// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKFORTIMERESOURCE_H
#define STASKFORTIMERESOURCE_H


#import <Foundation/Foundation.h>

#import "STAskForTimeClient.h"
#import "STAskForTimeRequest.h"

@interface STAskForTimeResource : NSObject

@property (retain, nonatomic) STAskForTimeClient *askForTimeClient; // ivar: _askForTimeClient
@property (readonly, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, nonatomic) int notificationToken; // ivar: _notificationToken
@property (readonly, nonatomic) STAskForTimeRequest *request; // ivar: _request


-(id)initWithResourceIdentifier:(id)arg0 resourceDisplayName:(id)arg1 usageType:(NSInteger)arg2 changeHandler:(id)arg3 ;
-(void)_approveExceptionForRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)approveAdditionalTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)approveOneMoreMinuteWithCompletionHandler:(id)arg0 ;
-(void)cancelOutstandingRequestsWithCompletion:(id)arg0 ;
-(void)checkRequestForAdditionalTimeWithResponseHandler:(id)arg0 ;
-(void)dealloc;
-(void)requestAdditionalTime:(CGFloat)arg0 completionHandler:(id)arg1 ;


@end


#endif