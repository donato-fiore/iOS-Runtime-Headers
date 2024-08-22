// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOCIALLAYERDAEMON_H
#define SOCIALLAYERDAEMON_H

@class NSMapTable, NSString, NSMutableArray, NSXPCListener;
@protocol NSXPCListenerDelegate, SLDServiceMultiplexing, SLDServiceMultiplexDelegate;

#import <Foundation/Foundation.h>


@interface SocialLayerDaemon : NSObject <NSXPCListenerDelegate, SLDServiceMultiplexing, SLDServiceMultiplexDelegate>



@property (readonly, nonatomic) int appleLanguageChangeNotificationToken; // ivar: _appleLanguageChangeNotificationToken
@property (retain, nonatomic) NSMapTable *connectionsToServicesTable; // ivar: _connectionsToServicesTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *multiplexesPendingRemoval; // ivar: _multiplexesPendingRemoval
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)_systemUIServiceIdentifier;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)_acceptMainConnection:(id)arg0 ;
-(void)_appConnectionInvalidated:(id)arg0 ;
-(void)_appleSystemLanguageDidChange:(id)arg0 ;
-(void)endpointForServiceNamed:(id)arg0 reply:(id)arg1 ;
-(void)multiplexDidRemoveAllServices:(id)arg0 ;
-(void)setupListeners;


@end


#endif