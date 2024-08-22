// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTTAPMESSAGEHANDLERARCHIVER_H
#define DTTAPMESSAGEHANDLERARCHIVER_H

@class DTXConnection, NSString;
@protocol DTXAllowedRPC;


#import "DTTapMessageHandler.h"

@interface DTTapMessageHandlerArchiver : DTTapMessageHandler <DTXAllowedRPC>

 {
    DTXConnection *_helperConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 archiveURL:(id)arg1 ;
-(id)messageReceived:(id)arg0 ;
-(void)_helperConnectionError;
-(void)dealloc;


@end


#endif