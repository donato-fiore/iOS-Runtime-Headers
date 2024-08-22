// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLSOCKETCOMMANDMESSAGE_H
#define WLSOCKETCOMMANDMESSAGE_H

@class NSString;


#import "WLSocketMessage.h"

@interface WLSocketCommandMessage : WLSocketMessage

@property (copy, nonatomic) NSString *command; // ivar: _command


-(id)initWithCommandString:(id)arg0 ;


@end


#endif