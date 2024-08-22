// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSENDEMERGENCYMESSAGE_H
#define IMSENDEMERGENCYMESSAGE_H

@class IMDaemonController<IMDaemonProtocol>;

#import <Foundation/Foundation.h>


@interface IMSendEmergencyMessage : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon; // ivar: _daemon


-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)dealloc;
-(void)locationUpdateSent;
-(void)sendEmergencyQuestionnaire:(id)arg0 ;
-(void)setUpConnectionToDaemaon;


@end


#endif