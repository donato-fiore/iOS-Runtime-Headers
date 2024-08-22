// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMVOICEMAILMESSAGE_H
#define VMVOICEMAILMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "VMAudioMessage.h"
#import "VMTranscriptMessage.h"

@interface VMVoicemailMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) VMAudioMessage *audio; // ivar: _audio
@property (retain, nonatomic) NSString *callbackDestinationID; // ivar: _callbackDestinationID
@property (retain, nonatomic) NSString *dataURL; // ivar: _dataURL
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasCallbackDestinationID;
@property (readonly, nonatomic) BOOL hasDataURL;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasProtocolVersion;
@property (readonly, nonatomic) BOOL hasReceiverDestinationID;
@property (readonly, nonatomic) BOOL hasReceiverLabelID;
@property (nonatomic) BOOL hasRemoteUID;
@property (readonly, nonatomic) BOOL hasSenderDestinationID;
@property (readonly, nonatomic) BOOL hasTranscript;
@property (readonly, nonatomic) BOOL hasTranscriptionURL;
@property (nonatomic) unsigned int identifier; // ivar: _identifier
@property (nonatomic) unsigned int protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSString *receiverDestinationID; // ivar: _receiverDestinationID
@property (retain, nonatomic) NSString *receiverLabelID; // ivar: _receiverLabelID
@property (nonatomic) unsigned int remoteUID; // ivar: _remoteUID
@property (retain, nonatomic) NSString *senderDestinationID; // ivar: _senderDestinationID
@property (retain, nonatomic) VMTranscriptMessage *transcript; // ivar: _transcript
@property (retain, nonatomic) NSString *transcriptionURL; // ivar: _transcriptionURL


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