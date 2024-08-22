// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCONTEXTMANAGER_H
#define AFCONTEXTMANAGER_H

@class CPDistributedMessagingCenter;

#import <Foundation/Foundation.h>


@interface AFContextManager : NSObject {
    *__CFArray _contextProviders;
    CPDistributedMessagingCenter *_center;
}




+(id)defaultContextManager;
-(BOOL)addContextProvider:(id)arg0 ;
-(id)_collateContexts;
-(id)_serverName;
-(id)init;
-(void)_collateContextsIntoArray:(id)arg0 ;
-(void)_shutdownServer;
-(void)_startListening;
-(void)_stopListening;
-(void)dealloc;
-(void)nothing;
-(void)removeContextProvider:(id)arg0 ;
-(void)startCenter:(id)arg0 ;


@end


#endif