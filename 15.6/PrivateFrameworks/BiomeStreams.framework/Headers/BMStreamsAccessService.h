// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMSACCESSSERVICE_H
#define BMSTREAMSACCESSSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSUInteger _signpost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif