// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNANALYSISSERVER_H
#define SNANALYSISSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "SNSystemServiceResourceCoordinator.h"

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    SNSystemServiceResourceCoordinator *_coordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif