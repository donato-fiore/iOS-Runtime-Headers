// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDSECURECHANNELCONTROLLER_H
#define CDPDSECURECHANNELCONTROLLER_H


#import <Foundation/Foundation.h>

#import "CDPDSecureChannelContext.h"

@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext *_secureChannelContext;
}




-(id)initWithContext:(id)arg0 ;
-(void)_processAndReplyWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)_startListeningWithProxy:(id)arg0 ;
-(void)joinCircle:(id)arg0 ;
-(void)startCircleApplicationApprovalServerWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif