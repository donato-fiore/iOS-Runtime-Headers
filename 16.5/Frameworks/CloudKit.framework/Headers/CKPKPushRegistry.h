// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPKPUSHREGISTRY_H
#define CKPKPUSHREGISTRY_H

@class NSString, NSHashTable, PKPushRegistry;
@protocol PKPushRegistryDelegate;

#import <Foundation/Foundation.h>


@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPushRegistry *pushRegistry; // ivar: _pushRegistry
@property (readonly) Class superclass;


+(id)sharedPushRegistry;
-(id)_init;
-(void)addDelegate:(id)arg0 ;
-(void)pushRegistry:(id)arg0 didReceiveIncomingPushWithPayload:(id)arg1 forType:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)pushRegistry:(id)arg0 didUpdatePushCredentials:(id)arg1 forType:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif