// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRLTSLOOPBACKTRANSLATIONSERVICE_H
#define BRLTSLOOPBACKTRANSLATIONSERVICE_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate;


#import "BRLTSTranslationService.h"

@interface BRLTSLoopbackTranslationService : BRLTSTranslationService <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;


@end


#endif