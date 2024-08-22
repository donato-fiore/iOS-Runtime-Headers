// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCDISPLAYLINKBLOCKTARGETPROXY_H
#define RCDISPLAYLINKBLOCKTARGETPROXY_H



#import "RCDisplayLinkTargetProxy.h"

@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy

@property (readonly, copy, nonatomic) id *handlerBlock; // ivar: _handlerBlock


-(id)initWithHandlerBlock:(id)arg0 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg0 ;


@end


#endif