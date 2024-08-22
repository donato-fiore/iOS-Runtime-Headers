// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSTUNRELAYINTERFACEINFOCONTROLLER_H
#define IDSSTUNRELAYINTERFACEINFOCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSStunRelayInterfaceInfoController : NSObject {
    NSMutableDictionary *_tokenToRelayInterfaceInfoDeliveryStatus;
}




+(id)sharedInstance;
-(NSUInteger)relayInterfaceInfoDeliveryStatus:(id)arg0 ;
-(id)candidatePairsFromRelayInterfaceInfo:(char *)arg0 bufferLength:(int)arg1 token:(id)arg2 sessionID:(id)arg3 error:(*int)arg4 ;
-(id)createRelayInterfaceInfoFromCandidatePairs:(id)arg0 token:(id)arg1 ;
-(void)removeCache:(id)arg0 ;
-(void)setRelayInterfaceInfoDeliveryStatus:(id)arg0 status:(NSUInteger)arg1 ;


@end


#endif