// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDELEGATEMANAGER_H
#define CHDELEGATEMANAGER_H

@class NSString, NSMapTable;
@protocol CHDelegateManager;

#import <Foundation/Foundation.h>


@interface CHDelegateManager : NSObject <CHDelegateManager>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)performDelegateSelector:(SEL)arg0 ;
-(void)performDelegateSelector:(SEL)arg0 withDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif