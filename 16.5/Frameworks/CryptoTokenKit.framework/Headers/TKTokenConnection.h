// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENCONNECTION_H
#define TKTOKENCONNECTION_H

@class NSString, NSXPCListener, NSMapTable;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "TKToken.h"

@interface TKTokenConnection : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *initialKeepAlive; // ivar: _initialKeepAlive
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSMapTable *sessions; // ivar: _sessions
@property (readonly) Class superclass;
@property (readonly, nonatomic) TKToken *token; // ivar: _token


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithToken:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif