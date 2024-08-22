// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPFOLLOWUPCONTROLLER_H
#define CDPFOLLOWUPCONTROLLER_H


#import <Foundation/Foundation.h>

#import "CDPDaemonConnection.h"

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}




-(BOOL)clearFollowUpWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)postFollowUpWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif