// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSTUNCONNECTIONDATACONTROLLER_H
#define IDSSTUNCONNECTIONDATACONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}




+(id)sharedInstance;
-(NSUInteger)deliveryStatus:(id)arg0 ;
-(id)candidatesFromData:(id)arg0 token:(id)arg1 ;
-(id)dataFromCandidates:(id)arg0 token:(id)arg1 remoteDeviceVersion:(unsigned int)arg2 ;
-(void)removeData:(id)arg0 ;
-(void)setDeliveryStatus:(id)arg0 status:(NSUInteger)arg1 ;


@end


#endif