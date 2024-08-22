// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCHANNELACTIVITYRESPONSE_H
#define SHAREDCHANNELACTIVITYRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "ChannelActivityActivationResponse.h"
#import "ChannelActivityDeactivationResponse.h"
#import "ChannelActivityPollingResponse.h"

@interface SharedChannelActivityResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ChannelActivityActivationResponse *activationResponse; // ivar: _activationResponse
@property (retain, nonatomic) ChannelActivityDeactivationResponse *deactivationResponse; // ivar: _deactivationResponse
@property (readonly, nonatomic) BOOL hasActivationResponse;
@property (readonly, nonatomic) BOOL hasDeactivationResponse;
@property (readonly, nonatomic) BOOL hasPollingResponse;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ChannelActivityPollingResponse *pollingResponse; // ivar: _pollingResponse
@property (nonatomic) int response; // ivar: _response


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)responseAsString:(int)arg0 ;
-(int)StringAsResponse:(id)arg0 ;
-(void)clearOneofValuesForResponse;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif