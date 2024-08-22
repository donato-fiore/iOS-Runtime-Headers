// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCDISPLAYLAYOUTMONITOR_H
#define INCDISPLAYLAYOUTMONITOR_H

@class NSDictionary, NSString, FBSDisplayMonitor, NSMutableDictionary, FBSDisplayLayoutMonitor;
@protocol FBSDisplayObserving;

#import <Foundation/Foundation.h>


@interface INCDisplayLayoutMonitor : NSObject <FBSDisplayObserving>



@property (nonatomic) BOOL alive; // ivar: _alive
@property (readonly, nonatomic) NSDictionary *currentDisplayLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayMonitor *displayMonitor; // ivar: _displayMonitor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *layoutMonitorsByIdentity; // ivar: _layoutMonitorsByIdentity
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *singleDisplayLayoutMonitor; // ivar: _singleDisplayLayoutMonitor
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transitionHandler; // ivar: _transitionHandler


+(void)initialize;
-(BOOL)hasRenderServerAccess;
-(BOOL)platformSupportsMultipleDisplays;
-(BOOL)shouldObserveMultipleDisplays;
-(id)init;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)executeBlockWithLock:(id)arg0 ;
-(void)invalidate;
-(void)lock_startLayoutMonitorForDisplay:(id)arg0 ;
-(void)resume;


@end


#endif