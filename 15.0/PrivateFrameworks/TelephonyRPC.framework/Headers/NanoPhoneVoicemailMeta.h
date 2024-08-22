// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NANOPHONEVOICEMAILMETA_H
#define NANOPHONEVOICEMAILMETA_H

@class PBCodable, NSString;
@protocol SYObject, NSCopying;


#import "NanoPhoneVoicemailBody.h"
#import "NanoPhoneVoicemailTranscript.h"

@interface NanoPhoneVoicemailMeta : PBCodable <SYObject, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *callbackNumber; // ivar: _callbackNumber
@property (retain, nonatomic) NSString *dataPath; // ivar: _dataPath
@property (nonatomic) CGFloat date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int duration; // ivar: _duration
@property (nonatomic) int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasCallbackNumber;
@property (readonly, nonatomic) BOOL hasDataPath;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNphReceiverISOCountryCode;
@property (readonly, nonatomic) BOOL hasReceiverDestinationID;
@property (nonatomic) BOOL hasRemoteUID;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasVoicemailBody;
@property (readonly, nonatomic) BOOL hasVoicemailTranscript;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *nphReceiverISOCountryCode; // ivar: _nphReceiverISOCountryCode
@property (retain, nonatomic) NSString *receiverDestinationID; // ivar: _receiverDestinationID
@property (nonatomic) NSInteger remoteUID; // ivar: _remoteUID
@property (retain, nonatomic) NSString *sender; // ivar: _sender
@property (readonly) Class superclass;
@property (retain, nonatomic) NanoPhoneVoicemailBody *voicemailBody; // ivar: _voicemailBody
@property (nonatomic) NSInteger voicemailNumber; // ivar: _voicemailNumber
@property (retain, nonatomic) NanoPhoneVoicemailTranscript *voicemailTranscript; // ivar: _voicemailTranscript


+(id)voicemailWithMessage:(id)arg0 ;
+(id)voicemailWithSYContext:(id)arg0 ;
+(id)xpcObjectAsArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)asXpcObject;
-(id)contactUsingContactStore:(id)arg0 withKeysToFetch:(id)arg1 ;
-(id)contextWithSyncOperation:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentation;
-(id)displayNameFromContactStore:(id)arg0 ;
-(id)initWithVoicemail:(id)arg0 ;
-(id)initWithVoicemailMessage:(id)arg0 ;
-(id)syncId;
-(id)voicemailDescription;
-(int)syncOperation;
-(void)attachToXpcObject:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)displayLabelFromContactStore:(id)arg0 withUpdateBlock:(id)arg1 ;
-(void)loadVoicemailBodyIfNeeded;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;
-(void)writeVoicemailBody;


@end


#endif