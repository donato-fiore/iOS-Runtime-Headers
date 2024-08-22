// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYPROMINENCELISTENER_H
#define ACACTIVITYPROMINENCELISTENER_H


#import <Foundation/Foundation.h>

#import "_TtC11ActivityKit35ActivityProminenceObservationClient.h"

@interface ACActivityProminenceListener : NSObject

@property (retain, nonatomic) _TtC11ActivityKit35ActivityProminenceObservationClient *client; // ivar: _client


-(id)init;
-(id)listenForActivityProminence:(id)arg0 withHandler:(id)arg1 ;


@end


#endif