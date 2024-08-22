// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBTIMEPROVIDEREVENT_H
#define RBTIMEPROVIDEREVENT_H

@class NSString;
@protocol RBTimeProvidingEvent, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RBTimeProviderEvent : NSObject <RBTimeProvidingEvent>

 {
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithSource:(id)arg0 ;
-(id)_initWithSource:(id)arg0 ;
-(void)cancel;


@end


#endif