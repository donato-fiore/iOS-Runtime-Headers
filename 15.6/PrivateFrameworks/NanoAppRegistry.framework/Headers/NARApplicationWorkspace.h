// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NARAPPLICATIONWORKSPACE_H
#define NARAPPLICATIONWORKSPACE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NARApplicationWorkspace : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_workspaceServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)workspaceInfo:(*id)arg0 ;
-(void)_loadConnectionIfNeeded;
-(void)dealloc;
-(void)getWorkspaceInfoIncludingHiddenApps:(BOOL)arg0 completion:(id)arg1 ;
-(void)getWorkspaceInfoWithCompletion:(id)arg0 ;


@end


#endif