// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDRAGGINGSYSTEMMANAGER_H
#define SBDRAGGINGSYSTEMMANAGER_H

@class NSHashTable, NSMapTable, NSString;
@protocol UIDraggingSystemMonitorDelegate;

#import <Foundation/Foundation.h>


@interface SBDraggingSystemManager : NSObject <UIDraggingSystemMonitorDelegate>

 {
    NSHashTable *_observers;
    NSMapTable *_commandeerReasons;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dragSessionDidBegin:(id)arg0 ;
-(void)dragSessionDidEnd:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setCommandeered:(BOOL)arg0 forDraggingSystemSession:(id)arg1 forReason:(id)arg2 ;
-(void)setCommandeered:(BOOL)arg0 forDropSession:(id)arg1 forReason:(id)arg2 ;


@end


#endif