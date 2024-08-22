// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CARPFSELECTORMESSAGEHANDLER_H
#define __CARPFSELECTORMESSAGEHANDLER_H

@class CARPFMessageHandler;



@interface __CARPFSelectorMessageHandler : CARPFMessageHandler

@property (readonly) SEL selector; // ivar: _selector


-(BOOL)invokeWithMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif