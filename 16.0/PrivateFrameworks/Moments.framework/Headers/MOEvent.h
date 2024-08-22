// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEVENT_H
#define MOEVENT_H

@class NSDate, NSUUID, NSString, NSNumber, PPScoredContact, NSArray, NSURL, RTLocation, NSDictionary, PPEvent;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MOEventExtendedAttributes.h"

@interface MOEvent : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUUID *eventIdentifier; // ivar: _eventIdentifier
@property (nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) MOEventExtendedAttributes *extendedAttributes; // ivar: _extendedAttributes
@property (retain, nonatomic) NSString *identifierFromProvider; // ivar: _identifierFromProvider
@property (retain, nonatomic) NSNumber *interactionContactScore; // ivar: _interactionContactScore
@property (retain, nonatomic) PPScoredContact *interactionScoredContact; // ivar: _interactionScoredContact
@property (retain, nonatomic) NSArray *interactions; // ivar: _interactions
@property (retain, nonatomic) NSArray *itemAccountHandles; // ivar: _itemAccountHandles
@property (retain, nonatomic) NSArray *itemAuthorAddresses; // ivar: _itemAuthorAddresses
@property (retain, nonatomic) NSArray *itemAuthorContactIdentifiers; // ivar: _itemAuthorContactIdentifiers
@property (retain, nonatomic) NSDate *itemContentCreationDate; // ivar: _itemContentCreationDate
@property (retain, nonatomic) NSString *itemDisplayName; // ivar: _itemDisplayName
@property (nonatomic) BOOL itemIsShared; // ivar: _itemIsShared
@property (retain, nonatomic) NSString *itemLinkDescription; // ivar: _itemLinkDescription
@property (retain, nonatomic) NSString *itemLinkTitle; // ivar: _itemLinkTitle
@property (retain, nonatomic) NSArray *itemRecipientAddresses; // ivar: _itemRecipientAddresses
@property (nonatomic) NSUInteger itemSyndicationStatus; // ivar: _itemSyndicationStatus
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (retain, nonatomic) NSString *itemUniqueIdentifier; // ivar: _itemUniqueIdentifier
@property (retain, nonatomic) RTLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *mediaAlbum; // ivar: _mediaAlbum
@property (retain, nonatomic) NSString *mediaArtist; // ivar: _mediaArtist
@property (retain, nonatomic) NSString *mediaGenre; // ivar: _mediaGenre
@property (retain, nonatomic) NSString *mediaPlayerBundleId; // ivar: _mediaPlayerBundleId
@property (retain, nonatomic) NSString *mediaProductId; // ivar: _mediaProductId
@property (retain, nonatomic) NSNumber *mediaRepetitions; // ivar: _mediaRepetitions
@property (retain, nonatomic) NSNumber *mediaSumTimePlayed; // ivar: _mediaSumTimePlayed
@property (retain, nonatomic) NSString *mediaTitle; // ivar: _mediaTitle
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger placeDiscovery; // ivar: _placeDiscovery
@property (retain, nonatomic) NSString *placeName; // ivar: _placeName
@property (nonatomic) NSUInteger placeUserType; // ivar: _placeUserType
@property (readonly, nonatomic) NSUInteger provider; // ivar: _provider
@property (retain, nonatomic) NSDictionary *scoredTopics; // ivar: _scoredTopics
@property (nonatomic) NSDate *sourceCreationDate; // ivar: _sourceCreationDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) PPEvent *suggestedEvent; // ivar: _suggestedEvent
@property (nonatomic) NSUInteger suggestedEventCategory; // ivar: _suggestedEventCategory
@property (retain, nonatomic) NSString *suggestedEventIdentifier; // ivar: _suggestedEventIdentifier
@property (retain, nonatomic) NSString *suggestedEventTitle; // ivar: _suggestedEventTitle
@property (retain, nonatomic) NSDictionary *trends; // ivar: _trends
@property (retain, nonatomic) NSArray *tripParts; // ivar: _tripParts
@property (retain, nonatomic) NSString *tripTitle; // ivar: _tripTitle
@property (retain, nonatomic) NSString *workoutType; // ivar: _workoutType


+(BOOL)supportsSecureCoding;
+(id)FormatDate:(id)arg0 ;
+(id)describeCategory:(NSUInteger)arg0 ;
+(id)describeProvider:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHomeWorkVisit;
-(NSUInteger)hash;
-(id)_descriptionOf:(NSUInteger)arg0 ;
-(id)_displayNameOfScoredTopics:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeToDictionary:(id)arg0 ;
-(id)describeCategory;
-(id)describeProvider;
-(id)description;
-(id)descriptionOfMode:(NSUInteger)arg0 ;
-(id)encodeDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 creationDate:(id)arg3 provider:(NSUInteger)arg4 category:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif