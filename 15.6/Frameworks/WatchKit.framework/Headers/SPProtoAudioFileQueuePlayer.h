// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOAUDIOFILEQUEUEPLAYER_H
#define SPPROTOAUDIOFILEQUEUEPLAYER_H

@class PBCodable;
@protocol NSCopying;


#import "SPProtoObjectMessage.h"
#import "SPProtoAudioFilePlayerUpdateContainedIdentifier.h"
#import "SPProtoAudioFileQueuePlayerSetRate.h"
#import "SPProtoAudioFilePlayerStatus.h"
#import "SPProtoAudioFileQueuePlayerSetItems.h"

@interface SPProtoAudioFileQueuePlayer : PBCodable <NSCopying>



@property (retain, nonatomic) SPProtoObjectMessage *advanceToNextItem; // ivar: _advanceToNextItem
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *appendItem; // ivar: _appendItem
@property (retain, nonatomic) SPProtoObjectMessage *destroy; // ivar: _destroy
@property (readonly, nonatomic) BOOL hasAdvanceToNextItem;
@property (readonly, nonatomic) BOOL hasAppendItem;
@property (readonly, nonatomic) BOOL hasDestroy;
@property (readonly, nonatomic) BOOL hasRemoveAllItems;
@property (readonly, nonatomic) BOOL hasRemoveItem;
@property (readonly, nonatomic) BOOL hasReplaceCurrentItem;
@property (readonly, nonatomic) BOOL hasSetCurrentItem;
@property (readonly, nonatomic) BOOL hasSetRate;
@property (readonly, nonatomic) BOOL hasSetStatus;
@property (readonly, nonatomic) BOOL hasUpsertWithItems;
@property (retain, nonatomic) SPProtoObjectMessage *removeAllItems; // ivar: _removeAllItems
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *removeItem; // ivar: _removeItem
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *replaceCurrentItem; // ivar: _replaceCurrentItem
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *setCurrentItem; // ivar: _setCurrentItem
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetRate *setRate; // ivar: _setRate
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus; // ivar: _setStatus
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetItems *upsertWithItems; // ivar: _upsertWithItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif