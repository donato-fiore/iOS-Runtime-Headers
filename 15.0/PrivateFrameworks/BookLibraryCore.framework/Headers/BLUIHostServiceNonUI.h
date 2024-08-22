// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLUIHOSTSERVICENONUI_H
#define BLUIHOSTSERVICENONUI_H

@protocol BLUIHostServiceProtocol;

#import <Foundation/Foundation.h>


@interface BLUIHostServiceNonUI : NSObject <BLUIHostServiceProtocol>





-(void)handleAuthenticateRequest:(id)arg0 withReply:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 withReply:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 withReply:(id)arg1 ;


@end


#endif