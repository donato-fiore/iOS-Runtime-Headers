// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BNPRESENTABLECONTEXT_H
#define _BNPRESENTABLECONTEXT_H

@class NSString, BSServiceConnection, NSHashTable;
@protocol BNPresentableContextHostToClientInterface, BNPresentableContext, BSInvalidatable, BNPresentableObservable, OS_dispatch_queue, BNPresentable;

#import <Foundation/Foundation.h>


@interface _BNPresentableContext : NSObject <BNPresentableContextHostToClientInterface, BNPresentableContext, BSInvalidatable, BNPresentableObservable>

 {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    NSHashTable *_observers;
    BOOL _valid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BNPresentable> *presentable; // ivar: _presentable
@property (readonly) Class superclass;


+(void)initialize;
-(id)_activeConnectionWithError:(*id)arg0 ;
-(id)initWithMachName:(id)arg0 presentable:(id)arg1 ;
-(void)__bannerWillNotAppearWithReason:(id)arg0 error:(*id)arg1 ;
-(void)__bannerWillNotAppearWithReason:(id)arg0 reply:(id)arg1 ;
-(void)__handleTemplateContentEvent:(id)arg0 error:(*id)arg1 ;
-(void)__handleTemplateContentEvent:(id)arg0 reply:(id)arg1 ;
-(void)__setBannerAppearState:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(void)__setBannerAppearState:(id)arg0 reason:(id)arg1 reply:(id)arg2 ;
-(void)__setUserInteractionWillBegin:(id)arg0 error:(*id)arg1 ;
-(void)__setUserInteractionWillBegin:(id)arg0 reply:(id)arg1 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_invalidateConnection;
-(void)addPresentableObserver:(id)arg0 ;
-(void)invalidate;
-(void)removePresentableObserver:(id)arg0 ;
-(void)setHostNeedsUpdate;


@end


#endif