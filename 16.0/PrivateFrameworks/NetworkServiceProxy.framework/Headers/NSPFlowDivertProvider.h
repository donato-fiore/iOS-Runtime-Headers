// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPFLOWDIVERTPROVIDER_H
#define NSPFLOWDIVERTPROVIDER_H

@class NEAppProxyProvider;


#import "NSPManager.h"

@interface NSPFlowDivertProvider : NEAppProxyProvider

@property (retain) NSPManager *manager; // ivar: _manager


-(BOOL)handleNewFlow:(id)arg0 ;
-(id)init;
-(void)startProxyWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopProxyWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif