// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBLAYERMETADATASERVICE_H
#define DBLAYERMETADATASERVICE_H

@class NSXPCConnection, NSString, NSXPCListener;
@protocol CRLayerPropertyService, NSXPCListenerDelegate, BSInvalidatable, DBLayerMetadataServiceDelegate;

#import <Foundation/Foundation.h>


@interface DBLayerMetadataService : NSObject <CRLayerPropertyService, NSXPCListenerDelegate, BSInvalidatable>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBLayerMetadataServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *layerMetadataServiceListener; // ivar: _layerMetadataServiceListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)sendLayerProperties:(id)arg0 ;


@end


#endif