// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDHANDLERREGISTRY_H
#define SVXSERVICECOMMANDHANDLERREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandHandlerRegistry : NSObject {
    NSDictionary *_handlersByServiceCommandClassName;
}




-(id)handlersForCommand:(id)arg0 ;
-(id)initWithHandlers:(id)arg0 ;


@end


#endif