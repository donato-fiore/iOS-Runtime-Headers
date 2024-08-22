// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYQOSLISTENER_H
#define ACACTIVITYQOSLISTENER_H


#import <Foundation/Foundation.h>

#import "_TtC11ActivityKit28ActivityQoSObservationClient.h"

@interface ACActivityQoSListener : NSObject

@property (retain, nonatomic) _TtC11ActivityKit28ActivityQoSObservationClient *client; // ivar: _client


-(id)init;
-(id)listenForActivityQoS:(id)arg0 withHandler:(id)arg1 ;


@end


#endif