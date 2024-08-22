// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBLAZARSERVICEDISCOVERYMESSAGE_H
#define FTMUTABLEBLAZARSERVICEDISCOVERYMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarServiceDiscoveryMessage.h"
#import "FTServiceDiscoveryRequest.h"
#import "FTServiceDiscoveryResponse.h"

@interface FTMutableBlazarServiceDiscoveryMessage : FTBlazarServiceDiscoveryMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTServiceDiscoveryRequest *session_messageAsFTServiceDiscoveryRequest;
@property (copy, nonatomic) FTServiceDiscoveryResponse *session_messageAsFTServiceDiscoveryResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif