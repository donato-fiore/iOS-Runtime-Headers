// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCHANNELACTIVITYREQUEST_H
#define SHAREDCHANNELACTIVITYREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "ChannelActivityActivationRequest.h"
#import "ChannelActivityDeactivationRequest.h"
#import "ChannelActivityPollingRequest.h"

@interface SharedChannelActivityRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ChannelActivityActivationRequest *activationRequest; // ivar: _activationRequest
@property (retain, nonatomic) ChannelActivityDeactivationRequest *deactivationRequest; // ivar: _deactivationRequest
@property (readonly, nonatomic) BOOL hasActivationRequest;
@property (readonly, nonatomic) BOOL hasDeactivationRequest;
@property (readonly, nonatomic) BOOL hasPollingRequest;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) ChannelActivityPollingRequest *pollingRequest; // ivar: _pollingRequest
@property (nonatomic) int request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestAsString:(int)arg0 ;
-(int)StringAsRequest:(id)arg0 ;
-(void)clearOneofValuesForRequest;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif