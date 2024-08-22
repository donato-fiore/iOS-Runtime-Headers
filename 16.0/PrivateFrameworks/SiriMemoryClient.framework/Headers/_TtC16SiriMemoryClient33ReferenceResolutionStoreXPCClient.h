// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRIMEMORYCLIENT33REFERENCERESOLUTIONSTOREXPCCLIENT_H
#define _TTC16SIRIMEMORYCLIENT33REFERENCERESOLUTIONSTOREXPCCLIENT_H

@class SwiftObject;
@protocol _TtP14SiriMemoryCore35ReferenceResolutionStoreXPCProtocol_;



@interface _TtC16SiriMemoryClient33ReferenceResolutionStoreXPCClient : SwiftObject <_TtP14SiriMemoryCore35ReferenceResolutionStoreXPCProtocol_>

 {
    ? queue;
    ? xpcConnection;
}




-(void)deleteEntitiesForKeys:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;
-(void)listEntitiesFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)pullEntitiesFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEntitiesWith:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif