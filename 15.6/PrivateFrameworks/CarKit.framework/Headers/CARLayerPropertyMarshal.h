// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARLAYERPROPERTYMARSHAL_H
#define CARLAYERPROPERTYMARSHAL_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CARLayerPropertyMarshal : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(void)_handleConnectionReset;
-(void)_setupConnection;
-(void)invalidate;
-(void)sendLayerProperties:(id)arg0 ;


@end


#endif