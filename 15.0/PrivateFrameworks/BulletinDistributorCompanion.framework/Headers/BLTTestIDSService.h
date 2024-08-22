// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTTESTIDSSERVICE_H
#define BLTTESTIDSSERVICE_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol BLTAbstractIDSService, BLTAbstractIDSDevice;

#import <Foundation/Foundation.h>

#import "BLTPBProtobufSequenceNumberManager.h"

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService>

 {
    NSString *_service;
    NSMutableDictionary *_actionsByRequestType;
    NSMutableDictionary *_actionsByResponseType;
    NSMutableArray *_delegates;
    NSUInteger _currentIdentifier;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<BLTAbstractIDSDevice> *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumResponseDelay; // ivar: _maximumResponseDelay
@property (nonatomic) NSUInteger maximumSendDelay; // ivar: _maximumSendDelay
@property (nonatomic) NSUInteger minimumResponseDelay; // ivar: _minimumResponseDelay
@property (nonatomic) NSUInteger minimumSendDelay; // ivar: _minimumSendDelay
@property (readonly) Class superclass;


-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendResourceAtURL:(id)arg0 metadata:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(NSUInteger)_randomResponseDelay;
-(NSUInteger)_randomSendDelay;
-(NSUInteger)_randomValueBetweenMin:(NSUInteger)arg0 max:(NSUInteger)arg1 ;
-(id)_lightsAndSirensRequestForProtobuf:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(void)_callDelegateActionForProtobuf:(id)arg0 delegate:(id)arg1 identifier:(id)arg2 type:(unsigned short)arg3 isResponse:(BOOL)arg4 ;
-(void)_handleProtobuf:(id)arg0 identifier:(id)arg1 sendDelay:(NSUInteger)arg2 ;
-(void)_sendBlockToAllDelegatesAfterTime:(NSUInteger)arg0 block:(id)arg1 ;
-(void)_sendLightsAndSirensRequestForProtobuf:(id)arg0 identifier:(id)arg1 sendDelay:(NSUInteger)arg2 ;
-(void)_sendSetSectionInfoResponseWithIdentifier:(id)arg0 sendDelay:(NSUInteger)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingRequestsOfType:(unsigned short)arg1 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingResponsesOfType:(unsigned short)arg1 ;


@end


#endif