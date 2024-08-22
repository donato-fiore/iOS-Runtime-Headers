// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTFUNCTION_H
#define SUSCRIPTFUNCTION_H

@class WebScriptObject, NSLock;

#import <Foundation/Foundation.h>

#import "SUScriptObject.h"

@interface SUScriptFunction : NSObject {
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}


@property (retain) WebScriptObject *scriptObject;
@property (weak) id *thisObject;


-(BOOL)callWithArguments:(id)arg0 ;
-(BOOL)callWithArguments:(id)arg0 completionBlock:(id)arg1 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg0 ;
-(id)callSynchronouslyWithArguments:(id)arg0 ;
-(id)init;
-(id)initWithScriptObject:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif