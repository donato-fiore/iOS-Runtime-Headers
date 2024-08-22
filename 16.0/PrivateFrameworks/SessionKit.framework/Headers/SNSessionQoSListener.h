// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSESSIONQOSLISTENER_H
#define SNSESSIONQOSLISTENER_H

@class ACActivityQoSListener;

#import <Foundation/Foundation.h>


@interface SNSessionQoSListener : NSObject

@property (retain, nonatomic) ACActivityQoSListener *listener; // ivar: _listener


-(id)init;
-(id)listenForSessionQoS:(id)arg0 withHandler:(id)arg1 ;


@end


#endif