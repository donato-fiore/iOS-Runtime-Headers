// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGCONVERSATIONACTIVITY_H
#define CPMESSAGINGCONVERSATIONACTIVITY_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "CPMessagingConversationActivityContext.h"
#import "CPMessagingConversationActivityMetadata.h"
#import "CPMessagingMMCSMetadata.h"
#import "CPMessagingHandle.h"

@interface CPMessagingConversationActivity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CPMessagingConversationActivityContext *activityContext; // ivar: _activityContext
@property (retain, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (retain, nonatomic) CPMessagingConversationActivityMetadata *activityMetadata; // ivar: _activityMetadata
@property (retain, nonatomic) NSData *applicationContext; // ivar: _applicationContext
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *fallbackApplicationName; // ivar: _fallbackApplicationName
@property (readonly, nonatomic) BOOL hasActivityContext;
@property (readonly, nonatomic) BOOL hasActivityIdentifier;
@property (readonly, nonatomic) BOOL hasActivityMetadata;
@property (readonly, nonatomic) BOOL hasApplicationContext;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) BOOL hasFallbackApplicationName;
@property (readonly, nonatomic) BOOL hasIdentifierUUIDString;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasMmcsMetadata;
@property (readonly, nonatomic) BOOL hasOriginatorHandle;
@property (nonatomic) BOOL hasUpdatedDateEpochTime;
@property (retain, nonatomic) NSString *identifierUUIDString; // ivar: _identifierUUIDString
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) CPMessagingMMCSMetadata *mmcsMetadata; // ivar: _mmcsMetadata
@property (retain, nonatomic) CPMessagingHandle *originatorHandle; // ivar: _originatorHandle
@property (nonatomic) CGFloat updatedDateEpochTime; // ivar: _updatedDateEpochTime


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