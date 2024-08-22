// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROHANDLER_H
#define SCROHANDLER_H

@class NSLock;
@protocol SCROHandlerProtocol;

#import <Foundation/Foundation.h>


@interface SCROHandler : NSObject <SCROHandlerProtocol>

 {
    NSLock *_lock;
    BOOL isInvalid;
}


@property (weak, nonatomic) id *callbackDelegate; // ivar: _callbackDelegate


-(id)init;
-(int)handleGetValue:(*id)arg0 forKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleGetValue:(*id)arg0 forKey:(int)arg1 withObject:(id)arg2 trusted:(BOOL)arg3 ;
-(int)handlePerformActionForKey:(int)arg0 trusted:(BOOL)arg1 ;
-(int)handleRegisterCallbackForKey:(int)arg0 trusted:(BOOL)arg1 ;
-(int)handleSetValue:(id)arg0 forKey:(int)arg1 trusted:(BOOL)arg2 ;
-(void)invalidate;
-(void)lock;
-(void)unlock;


@end


#endif