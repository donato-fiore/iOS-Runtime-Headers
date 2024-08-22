// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATCLIENTCONTROLLER_H
#define ATCLIENTCONTROLLER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATClientController : NSObject {
    NSDictionary *_clientMap;
    *__CFDictionary _queueMap;
}




+(id)controllerForDataclasses:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_loadClientsForDataclasses:(id)arg0 ;
-(id)allClients;
-(id)clientForDataclass:(id)arg0 ;
-(id)queueForClient:(id)arg0 ;
-(void)dealloc;
-(void)resetQueues;
-(void)waitToDrain;


@end


#endif