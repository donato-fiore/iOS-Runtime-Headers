// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONUSERINTERFACELISTENER_H
#define WFACTIONUSERINTERFACELISTENER_H

@class WFSingleConnectionXPCListener;


#import "WFActionUserInterface.h"

@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener

@property (readonly, nonatomic) WFActionUserInterface *actionInterface; // ivar: _actionInterface


-(id)initWithUserInterfaceType:(id)arg0 actionClassName:(id)arg1 classNamesByType:(id)arg2 ;
-(id)initWithUserInterfaceType:(id)arg0 actionClassName:(id)arg1 classNamesByType:(id)arg2 attribution:(id)arg3 ;


@end


#endif