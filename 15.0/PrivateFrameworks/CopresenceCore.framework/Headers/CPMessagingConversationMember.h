// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGCONVERSATIONMEMBER_H
#define CPMESSAGINGCONVERSATIONMEMBER_H

@class PBCodable;
@protocol NSCopying;


#import "CPMessagingHandle.h"

@interface CPMessagingConversationMember : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CPMessagingHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL hasHandle;
@property (nonatomic) BOOL hasVersion;
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