// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLSCRIPTSIGNALHANDLER_H
#define TMLSCRIPTSIGNALHANDLER_H

@class NSString;
@protocol TMLSignalHandler;

#import <Foundation/Foundation.h>

#import "TMLContext.h"

@interface TMLScriptSignalHandler : NSObject <TMLSignalHandler>

 {
    TMLContext *_context;
    id *_target;
    NSString *_functionName;
    NSUInteger _returnType;
    int _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)callWithArguments:(id)arg0 ;
-(id)initWithFunctionName:(id)arg0 returnType:(NSUInteger)arg1 target:(id)arg2 context:(id)arg3 ;
-(void)attach;
-(void)detach;


@end


#endif