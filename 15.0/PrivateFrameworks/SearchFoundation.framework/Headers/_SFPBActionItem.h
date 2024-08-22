// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBACTIONITEM_H
#define _SFPBACTIONITEM_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBActionItem, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBPunchout.h"
#import "_SFPBGraphicalFloat.h"
#import "_SFPBLatLng.h"
#import "_SFPBURL.h"

@interface _SFPBActionItem : PBCodable <_SFPBActionItem, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (retain, nonatomic) _SFPBImage *baseIcon; // ivar: _baseIcon
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) _SFPBPunchout *customDirectionsPunchout; // ivar: _customDirectionsPunchout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int directionsMode; // ivar: _directionsMode
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *interactionContentType; // ivar: _interactionContentType
@property (nonatomic) BOOL isITunes; // ivar: _isITunes
@property (nonatomic) BOOL isOverlay; // ivar: _isOverlay
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *labelForLocalMedia; // ivar: _labelForLocalMedia
@property (copy, nonatomic) NSString *labelITunes; // ivar: _labelITunes
@property (retain, nonatomic) _SFPBGraphicalFloat *latitude; // ivar: _latitude
@property (copy, nonatomic) NSString *localMediaIdentifier; // ivar: _localMediaIdentifier
@property (retain, nonatomic) _SFPBLatLng *location; // ivar: _location
@property (retain, nonatomic) _SFPBGraphicalFloat *longitude; // ivar: _longitude
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (nonatomic) int mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (retain, nonatomic) _SFPBURL *messageURL; // ivar: _messageURL
@property (copy, nonatomic) NSString *offerType; // ivar: _offerType
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (retain, nonatomic) _SFPBPunchout *punchout; // ivar: _punchout
@property (nonatomic) BOOL requiresLocalMedia; // ivar: _requiresLocalMedia
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; // ivar: _shouldSearchDirectionsAlongCurrentRoute
@property (copy, nonatomic) NSArray *storeIdentifiers; // ivar: _storeIdentifiers
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *universalLibraryID; // ivar: _universalLibraryID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)storeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addStoreIdentifiers:(id)arg0 ;
-(void)clearStoreIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif