// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSESSIONPROMINENCELISTENER_H
#define SNSESSIONPROMINENCELISTENER_H

@class ACActivityProminenceListener;

#import <Foundation/Foundation.h>


@interface SNSessionProminenceListener : NSObject

@property (retain, nonatomic) ACActivityProminenceListener *listener; // ivar: _listener


-(id)init;
-(id)listenForSessionProminence:(id)arg0 withHandler:(id)arg1 ;


@end


#endif