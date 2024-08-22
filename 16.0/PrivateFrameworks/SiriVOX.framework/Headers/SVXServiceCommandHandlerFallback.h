// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSERVICECOMMANDHANDLERFALLBACK_H
#define SVXSERVICECOMMANDHANDLERFALLBACK_H

@class NSString;
@protocol SVXServiceCommandHandling;

#import <Foundation/Foundation.h>

#import "SVXServiceCommandResult.h"

@interface SVXServiceCommandHandlerFallback : NSObject <SVXServiceCommandHandling>

 {
    SVXServiceCommandResult *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;


@end


#endif