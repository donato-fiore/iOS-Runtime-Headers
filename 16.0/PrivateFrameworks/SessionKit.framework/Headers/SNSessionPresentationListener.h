// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSESSIONPRESENTATIONLISTENER_H
#define SNSESSIONPRESENTATIONLISTENER_H

@class ACActivityPresentationListener;

#import <Foundation/Foundation.h>


@interface SNSessionPresentationListener : NSObject

@property (retain, nonatomic) ACActivityPresentationListener *listener; // ivar: _listener


-(id)init;
-(id)listenForSessionPresentation:(id)arg0 presenterBundleIdentifier:(id)arg1 withHandler:(id)arg2 ;


@end


#endif