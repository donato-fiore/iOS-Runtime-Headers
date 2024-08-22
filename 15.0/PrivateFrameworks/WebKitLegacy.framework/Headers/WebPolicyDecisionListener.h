// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBPOLICYDECISIONLISTENER_H
#define WEBPOLICYDECISIONLISTENER_H

@class NSString;
@protocol WebPolicyDecisionListener;

#import <Foundation/Foundation.h>

#import "WebPolicyDecisionListenerPrivate.h"

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener>

 {
    WebPolicyDecisionListenerPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_invalidate;
-(void)_usePolicy:(unsigned char)arg0 ;
-(void)dealloc;
-(void)download;
-(void)ignore;
-(void)use;


@end


#endif