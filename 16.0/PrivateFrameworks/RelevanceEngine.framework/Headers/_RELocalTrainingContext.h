// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RELOCALTRAININGCONTEXT_H
#define _RELOCALTRAININGCONTEXT_H

@class NSXPCConnection, NSString;
@protocol RERemoteTrainingServerInterface, OS_dispatch_queue;


#import "RETrainingContext.h"

@interface _RELocalTrainingContext : RETrainingContext <RERemoteTrainingServerInterface>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;


-(id)_elementRelevanceEngine;
-(id)initWithConnection:(id)arg0 ;
-(void)_configureForRelevanceEngine:(id)arg0 ;
-(void)_handleInvalidation;
-(void)performTrainingWithElements:(id)arg0 events:(id)arg1 interactions:(id)arg2 completion:(id)arg3 ;
-(void)updateRemoteAttribute:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif