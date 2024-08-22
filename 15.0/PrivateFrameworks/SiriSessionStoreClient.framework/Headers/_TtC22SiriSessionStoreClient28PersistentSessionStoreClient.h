// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC22SIRISESSIONSTORECLIENT28PERSISTENTSESSIONSTORECLIENT_H
#define _TTC22SIRISESSIONSTORECLIENT28PERSISTENTSESSIONSTORECLIENT_H

@class TtC22SiriSessionStoreClient24MemorySessionStoreClient;



@interface _TtC22SiriSessionStoreClient28PersistentSessionStoreClient : TtC22SiriSessionStoreClient24MemorySessionStoreClient



-(id)init;
-(id)initForClient:(id)arg0 ;
-(void)writeAndCommitValuesForKeysWithValues:(id)arg0 assistantId:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 ;
-(void)writeAndCommitValuesForKeysWithValues:(id)arg0 assistantId:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 keysToRemove:(id)arg4 ;


@end


#endif