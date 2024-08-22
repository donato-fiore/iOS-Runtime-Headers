// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFSELECTORMESSAGEHANDLER_H
#define __HMFSELECTORMESSAGEHANDLER_H

@class HMFMessageHandler;



@interface __HMFSelectorMessageHandler : HMFMessageHandler

@property (readonly) SEL selector; // ivar: _selector


-(BOOL)invokeWithMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif