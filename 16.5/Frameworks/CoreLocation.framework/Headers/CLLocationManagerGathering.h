// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLLOCATIONMANAGERGATHERING_H
#define CLLOCATIONMANAGERGATHERING_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLLocationManagerGathering : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)getConnection;
-(id)getRemoteObjectProxy;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)fetchAdvertisementsWithHandler:(id)arg0 ;


@end


#endif