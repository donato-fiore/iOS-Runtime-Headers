// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCARD_H
#define SFCARD_H

@class NSString, NSArray, NSDictionary, NSData, NSURL;
@protocol SFCard, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"

@interface SFCard : NSObject <SFCard, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *cardId; // ivar: _cardId
@property (copy) NSArray *cardSections; // ivar: _cardSections
@property (copy, nonatomic) NSString *contextReferenceIdentifier; // ivar: _contextReferenceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *dismissalCommands; // ivar: _dismissalCommands
@property (copy, nonatomic) NSData *entityIdentifier; // ivar: _entityIdentifier
@property (copy, nonatomic) NSArray *entityProtobufMessages; // ivar: _entityProtobufMessages
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (nonatomic) BOOL flexibleSectionOrder; // ivar: _flexibleSectionOrder
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *intentMessageData; // ivar: _intentMessageData
@property (copy, nonatomic) NSString *intentMessageName; // ivar: _intentMessageName
@property (copy, nonatomic) NSData *intentResponseMessageData; // ivar: _intentResponseMessageData
@property (copy, nonatomic) NSString *intentResponseMessageName; // ivar: _intentResponseMessageName
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData; // ivar: _originalCardData
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) SFImage *titleImage; // ivar: _titleImage
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSURL *urlValue; // ivar: _urlValue


+(BOOL)supportsSecureCoding;
-(BOOL)hasFlexibleSectionOrder;
-(BOOL)hasQueryId;
-(BOOL)hasSource;
-(BOOL)hasType;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadCardSectionsWithCompletionAndErrorHandler:(id)arg0 ;
-(void)loadCardSectionsWithCompletionHandler:(id)arg0 ;


@end


#endif