// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADATTRIBUTIONSERVICE_H
#define ADATTRIBUTIONSERVICE_H

@class ADSingleton, NSMutableDictionary, NSString, NSXPCListener, NSNumber;
@protocol NSXPCListenerDelegate;



@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate>



@property (retain, nonatomic) NSMutableDictionary *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *transactionID; // ivar: _transactionID


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)removeClientForToken:(id)arg0 ;


@end


#endif