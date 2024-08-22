// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMESSAGESDAEMONCONNECTION_H
#define SGMESSAGESDAEMONCONNECTION_H

@protocol SGDSuggestManagerMessagesProtocol;

#import <Foundation/Foundation.h>

#import "SGFuture.h"

@interface SGMessagesDaemonConnection : NSObject {
    SGFuture *_daemonConnectionFuture;
    id<SGDSuggestManagerMessagesProtocol> *_remoteSuggestionManagerForTesting;
}




-(id)initWithDaemonConnectionFuture:(id)arg0 ;
-(id)remoteSuggestionManagerWithErrorHandler:(id)arg0 ;
-(void)setManagerForTesting:(id)arg0 ;


@end


#endif