// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSTIMERCONTEXT_H
#define IKJSTIMERCONTEXT_H

@class JSManagedValue, NSTimer;

#import <Foundation/Foundation.h>

#import "IKJSManagedArray.h"

@interface IKJSTimerContext : NSObject

@property (readonly, nonatomic) BOOL isRepeating; // ivar: _isRepeating
@property (readonly, retain, nonatomic) IKJSManagedArray *managedArgs; // ivar: _managedArgs
@property (readonly, retain, nonatomic) JSManagedValue *managedCallback; // ivar: _managedCallback
@property (readonly, retain, nonatomic) id *ownerObject; // ivar: _ownerObject
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(id)description;
-(id)initWithCallback:(id)arg0 callbackArgs:(id)arg1 repeating:(BOOL)arg2 ownerObject:(id)arg3 timer:(id)arg4 ;
-(void)dealloc;
-(void)removeManagedReferences;


@end


#endif