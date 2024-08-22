// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDREBUILDCLIENT_H
#define _LSDREBUILDCLIENT_H

@class LSDClient;
@protocol _LSDRebuildServiceProtocol;



@interface _LSDRebuildClient : LSDClient <_LSDRebuildServiceProtocol>





-(id)initWithXPCConnection:(id)arg0 ;
-(void)noteMigratorRunningWithReply:(id)arg0 ;
-(void)performRebuildRegistration:(id)arg0 reply:(id)arg1 ;


@end


#endif