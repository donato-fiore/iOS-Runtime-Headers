// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACTIVITYPRESENTATIONLISTENER_H
#define ACACTIVITYPRESENTATIONLISTENER_H


#import <Foundation/Foundation.h>

#import "_TtC11ActivityKit37ActivityPresentationObservationClient.h"

@interface ACActivityPresentationListener : NSObject

@property (retain, nonatomic) _TtC11ActivityKit37ActivityPresentationObservationClient *client; // ivar: _client


-(id)init;
-(id)listenForActivityPresentation:(id)arg0 presenterBundleIdentifier:(id)arg1 withHandler:(id)arg2 ;


@end


#endif