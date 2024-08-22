// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBCOMMUNICATIONSAFETYRESULTEVENT_H
#define BMPBCOMMUNICATIONSAFETYRESULTEVENT_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface BMPBCommunicationSafetyResultEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *childId; // ivar: _childId
@property (nonatomic) int communicationSafetyResultContentType; // ivar: _communicationSafetyResultContentType
@property (nonatomic) int communicationSafetyResultEventDirection; // ivar: _communicationSafetyResultEventDirection
@property (nonatomic) int communicationSafetyResultEventType; // ivar: _communicationSafetyResultEventType
@property (retain, nonatomic) NSMutableArray *contactHandles; // ivar: _contactHandles
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSString *conversationURL; // ivar: _conversationURL
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasChildId;
@property (nonatomic) BOOL hasCommunicationSafetyResultContentType;
@property (nonatomic) BOOL hasCommunicationSafetyResultEventDirection;
@property (nonatomic) BOOL hasCommunicationSafetyResultEventType;
@property (readonly, nonatomic) BOOL hasContentId;
@property (readonly, nonatomic) BOOL hasContentURL;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasConversationURL;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (readonly, nonatomic) BOOL hasImageData;
@property (readonly, nonatomic) BOOL hasSenderHandle;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)communicationSafetyResultContentTypeAsString:(int)arg0 ;
-(id)communicationSafetyResultEventDirectionAsString:(int)arg0 ;
-(id)communicationSafetyResultEventTypeAsString:(int)arg0 ;
-(id)contactHandlesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCommunicationSafetyResultContentType:(id)arg0 ;
-(int)StringAsCommunicationSafetyResultEventDirection:(id)arg0 ;
-(int)StringAsCommunicationSafetyResultEventType:(id)arg0 ;
-(void)addContactHandles:(id)arg0 ;
-(void)clearContactHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif