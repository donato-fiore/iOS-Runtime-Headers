// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSERVICECONNECTIONHANDLER_H
#define VSSERVICECONNECTIONHANDLER_H

@class NSXPCConnection;
@protocol VSServiceConnectionHandlerDelegate;

#import <Foundation/Foundation.h>


@interface VSServiceConnectionHandler : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<VSServiceConnectionHandlerDelegate> *delegate; // ivar: _delegate


-(void)_didFinish;


@end


#endif