// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SIRIMEMORYSERVICE35REFERENCERESOLUTIONSTOREXPCLISTENER_H
#define _TTC17SIRIMEMORYSERVICE35REFERENCERESOLUTIONSTOREXPCLISTENER_H

@protocol NSXPCListenerDelegate, _TtP14SiriMemoryCore35ReferenceResolutionStoreXPCProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC17SiriMemoryService35ReferenceResolutionStoreXPCListener : NSObject <NSXPCListenerDelegate, _TtP14SiriMemoryCore35ReferenceResolutionStoreXPCProtocol_>

 {
    ? module;
    ? listener;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)deleteEntitiesForKeys:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;
-(void)listEntitiesFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)pullEntitiesFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEntitiesWith:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif