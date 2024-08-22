// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTXPCDISPATCHER_H
#define GTXPCDISPATCHER_H

@class NSSet;
@protocol GTXPCDispatcher;

#import <Foundation/Foundation.h>


@interface GTXPCDispatcher : NSObject <GTXPCDispatcher>

 {
    NSSet *_protocolMethods;
}




-(id)initWithProtocolMethods:(id)arg0 ;
-(void)dispatchMessage:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif