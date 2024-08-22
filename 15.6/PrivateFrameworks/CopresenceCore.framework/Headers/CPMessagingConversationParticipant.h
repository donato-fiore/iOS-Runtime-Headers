// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMESSAGINGCONVERSATIONPARTICIPANT_H
#define CPMESSAGINGCONVERSATIONPARTICIPANT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "CPMessagingHandle.h"

@interface CPMessagingConversationParticipant : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *avcData; // ivar: _avcData
@property (retain, nonatomic) CPMessagingHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL hasAvcData;
@property (readonly, nonatomic) BOOL hasHandle;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsGondolaCallingAvailable;
@property (nonatomic) BOOL hasIsMirageAvailable;
@property (nonatomic) BOOL hasIsMomentsAvailable;
@property (nonatomic) BOOL hasIsScreenSharingAvailable;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL isGondolaCallingAvailable; // ivar: _isGondolaCallingAvailable
@property (nonatomic) BOOL isMirageAvailable; // ivar: _isMirageAvailable
@property (nonatomic) BOOL isMomentsAvailable; // ivar: _isMomentsAvailable
@property (nonatomic) BOOL isScreenSharingAvailable; // ivar: _isScreenSharingAvailable
@property (nonatomic) unsigned int version; // ivar: _version


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