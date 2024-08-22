// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCBULLETINACTIONRUNNER_H
#define NCBULLETINACTIONRUNNER_H

@class BBAction, BBBulletin, NSString, BBObserver;
@protocol NCNotificationActionRunner;

#import <Foundation/Foundation.h>


@interface NCBulletinActionRunner : NSObject <NCNotificationActionRunner>



@property (readonly, nonatomic) BBAction *action; // ivar: _action
@property (readonly, nonatomic) BBBulletin *bulletin; // ivar: _bulletin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BBObserver *observer; // ivar: _observer
@property (nonatomic) BOOL responseWasSent; // ivar: _responseWasSent
@property (nonatomic) BOOL shouldForwardAction; // ivar: _shouldForwardAction
@property (readonly) Class superclass;


-(id)initWithAction:(id)arg0 bulletin:(id)arg1 observer:(id)arg2 ;
-(void)executeAction:(id)arg0 fromOrigin:(id)arg1 endpoint:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;


@end


#endif