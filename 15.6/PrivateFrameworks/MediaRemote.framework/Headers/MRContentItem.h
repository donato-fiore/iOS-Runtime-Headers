// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCONTENTITEM_H
#define MRCONTENTITEM_H

@class NSString, NSArray, NSData, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRContentItemMetadata.h"
#import "MRArtwork.h"
#import "_MRContentItemProtobuf.h"
#import "MRContentItem.h"

@interface MRContentItem : NSObject <NSCopying>

 {
    MRContentItemMetadata *_metadata;
}


@property (copy, nonatomic) NSString *ancestorIdentifier; // ivar: _ancestorIdentifier
@property (retain, nonatomic) MRArtwork *artwork; // ivar: _artwork
@property (copy, nonatomic) NSString *associatedParticipantIdentifier; // ivar: _associatedParticipantIdentifier
@property (copy, nonatomic) NSArray *availableLanguageOptions; // ivar: _availableLanguageOptions
@property (copy, nonatomic) NSArray *currentLanguageOptions; // ivar: _currentLanguageOptions
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *info; // ivar: _info
@property (copy, nonatomic) MRContentItemMetadata *metadata;
@property (readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, nonatomic) _MRContentItemProtobuf *protobuf;
@property (copy, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) MRContentItem *skeleton;


+(id)extractedIdentifierFromNowPlayingInfo:(id)arg0 ;
+(id)mergeContentItems:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithNowPlayingInfo:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif