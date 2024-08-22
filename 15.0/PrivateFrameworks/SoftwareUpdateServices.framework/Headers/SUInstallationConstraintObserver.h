// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUINSTALLATIONCONSTRAINTOBSERVER_H
#define SUINSTALLATIONCONSTRAINTOBSERVER_H

@class NSMapTable, NSString;
@protocol SUInvalidatable, SUInstallationConstraintObserverDelegate;


#import "SUComposedInstallationConstraintMonitor.h"
#import "SUDownload.h"

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable>

 {
    id<SUInstallationConstraintObserverDelegate> *_delegate;
    NSMapTable *_queue_observerBlockTokens;
    BOOL _queue_invalidated;
    NSUInteger _queue_tokenCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUInstallationConstraintObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) SUDownload *download; // ivar: _download
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasAnyBlockObservers;
-(id)init;
-(id)initWithDownload:(id)arg0 ;
-(id)initWithDownload:(id)arg0 queue:(id)arg1 constraints:(id)arg2 ;
-(id)monitorOfClass:(Class)arg0 ;
-(id)registerObserverBlock:(id)arg0 ;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg0 constraintsDidChange:(NSUInteger)arg1 ;
-(void)_removeToken:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;


@end


#endif