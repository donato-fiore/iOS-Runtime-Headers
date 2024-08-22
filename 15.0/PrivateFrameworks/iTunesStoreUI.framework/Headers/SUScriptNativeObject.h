// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTNATIVEOBJECT_H
#define SUSCRIPTNATIVEOBJECT_H

@class NSLock;

#import <Foundation/Foundation.h>

#import "SUScriptObject.h"

@interface SUScriptNativeObject : NSObject {
    id *_strongObject;
    id *_weakObject;
    SUScriptObject *_scriptObject;
}


@property (retain, nonatomic) NSLock *internalLock; // ivar: _internalLock
@property (retain) id *object;
@property (weak) SUScriptObject *scriptObject;
@property (retain, nonatomic) id *strongObject;
@property (weak, nonatomic) id *weakObject;


+(id)objectWithNativeObject:(id)arg0 ;
+(id)objectWithNativeObject:(id)arg0 weak:(BOOL)arg1 ;
-(id)init;
-(void)destroyNativeObject;
-(void)lock;
-(void)setupNativeObject;
-(void)unlock;


@end


#endif