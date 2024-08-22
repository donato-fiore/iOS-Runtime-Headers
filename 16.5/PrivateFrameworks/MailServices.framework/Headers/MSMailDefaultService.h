// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMAILDEFAULTSERVICE_H
#define MSMAILDEFAULTSERVICE_H



#import "MSService.h"

@interface MSMailDefaultService : MSService

@property (nonatomic) BOOL shouldLaunchMobileMail; // ivar: _shouldLaunch


-(BOOL)_launchMobileMailSuspendedError:(*id)arg0 ;
-(id)_createServiceOnQueue:(id)arg0 ;
-(id)_handleMessageSendFailure:(id)arg0 message:(id)arg1 messageIndex:(NSInteger)arg2 context:(*id)arg3 ;
-(id)init;


@end


#endif