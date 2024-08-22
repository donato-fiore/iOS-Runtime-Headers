// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NW_INTERPOSE_FLOW_H
#define NW_INTERPOSE_FLOW_H

@protocol OS_nw_interface, OS_nw_path_flow_registration, OS_nw_path_flow;

#import <Foundation/Foundation.h>


@interface nw_interpose_flow : NSObject {
    NSObject<OS_nw_interface> *_interface;
    NSObject<OS_nw_path_flow_registration> *_registration;
    NSObject<OS_nw_path_flow> *_flow;
    id *_eventHandler;
}




-(BOOL)matchNexusAgent:(unsigned char)arg0 ;
-(BOOL)matchNexusAgentWithFlow:(id)arg0 ;
-(BOOL)matchNexusInstance:(id)arg0 ;
-(id)initWithInterface:(id)arg0 registration:(id)arg1 eventHandler:(id)arg2 ;
-(void)clearFlowEventHandler;
-(void)close;
-(void)closeFlow;
-(void)dealloc;
-(void)notifyFlowEvent:(int)arg0 ;
-(void)resetFlow:(id)arg0 ;


@end


#endif