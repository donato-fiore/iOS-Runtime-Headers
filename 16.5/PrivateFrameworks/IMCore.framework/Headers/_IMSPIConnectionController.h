// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IMSPICONNECTIONCONTROLLER_H
#define _IMSPICONNECTIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface _IMSPIConnectionController : NSObject



+(id)sharedController;
-(void)clearChatCap;
-(void)setChatCap;
-(void)setChatSendCap;
-(void)setChatSendCapWithAttachments;


@end


#endif