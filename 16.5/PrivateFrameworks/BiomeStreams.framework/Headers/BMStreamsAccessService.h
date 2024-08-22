// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMSACCESSSERVICE_H
#define BMSTREAMSACCESSSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSUInteger _domain;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initLegacy;
-(id)initWithDomain:(NSUInteger)arg0 ;
-(id)initWithMachServiceName:(id)arg0 domain:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif