// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTTAPMESSAGEHANDLER_H
#define DTTAPMESSAGEHANDLER_H


#import <Foundation/Foundation.h>

#import "DTTapConfig.h"

@interface DTTapMessageHandler : NSObject

@property (readonly, retain, nonatomic) DTTapConfig *config; // ivar: _config


-(id)initWithConfig:(id)arg0 ;
-(id)messageReceived:(id)arg0 ;
-(void)stop;


@end


#endif