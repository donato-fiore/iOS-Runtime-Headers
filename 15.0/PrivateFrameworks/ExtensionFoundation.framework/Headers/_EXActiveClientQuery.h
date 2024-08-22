// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXACTIVECLIENTQUERY_H
#define _EXACTIVECLIENTQUERY_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint, NSSet, NSXPCListener;
@protocol NSXPCListenerDelegate, _EXQueryResultsProtocol;

#import <Foundation/Foundation.h>

#import "_EXQuery.h"

@interface _EXActiveClientQuery : NSObject <NSXPCListenerDelegate, _EXQueryResultsProtocol>



@property (readonly, getter=isActive) BOOL active;
@property (weak) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (retain) NSSet *observers; // ivar: _observers
@property (readonly) _EXQuery *query; // ivar: _query
@property BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActiveQuery:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQuery:(id)arg0 ;
-(void)addQueryObserver:(id)arg0 ;
-(void)query:(id)arg0 resultsDidUpdate:(id)arg1 reply:(id)arg2 ;
-(void)removeQueryObserver:(id)arg0 ;
-(void)reset;


@end


#endif