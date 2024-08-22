// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPROBJECT_H
#define SPROBJECT_H

@class NSString;
@protocol NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SPRObject : NSObject {
    id *_connector;
}


@property (readonly) NSObject<NSXPCProxyCreating> *connection; // ivar: _connection
@property (readonly) NSString *proxyDescription;


-(id)asyncProxyWithErrorHandler:(id)arg0 ;
-(id)connectAndReturnError:(*id)arg0 ;
-(id)connectionWithErrorHandler:(id)arg0 ;
-(id)initWithConnector:(id)arg0 ;
-(id)mapXPCConnectionError:(id)arg0 ;
-(id)syncProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)onDisconnect;


@end


#endif