// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEINITIALIZATIONREQUEST_H
#define NPKPROTOSTANDALONEINITIALIZATIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "NPKProtoStandaloneImageSize.h"
#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPassImageSize;
@property (readonly, nonatomic) BOOL hasPassThumbnailImageSize;
@property (nonatomic) BOOL hasUseSimulatedFlowController;
@property (readonly, nonatomic) BOOL hasUserLanguageCode;
@property (retain, nonatomic) NPKProtoStandaloneImageSize *passImageSize; // ivar: _passImageSize
@property (retain, nonatomic) NPKProtoStandaloneImageSize *passThumbnailImageSize; // ivar: _passThumbnailImageSize
@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader
@property (nonatomic) BOOL useSimulatedFlowController; // ivar: _useSimulatedFlowController
@property (retain, nonatomic) NSString *userLanguageCode; // ivar: _userLanguageCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif