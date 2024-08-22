// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACTIONITEM_H
#define SFACTIONITEM_H

@class NSString, NSDictionary, NSData, NSURL, NSArray;
@protocol SFActionItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"
#import "SFPunchout.h"
#import "SFLatLng.h"

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (retain, nonatomic) SFImage *baseIcon; // ivar: _baseIcon
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) SFPunchout *customDirectionsPunchout; // ivar: _customDirectionsPunchout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int directionsMode; // ivar: _directionsMode
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *interactionContentType; // ivar: _interactionContentType
@property (nonatomic) BOOL isITunes; // ivar: _isITunes
@property (nonatomic) BOOL isOverlay; // ivar: _isOverlay
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *labelForLocalMedia; // ivar: _labelForLocalMedia
@property (copy, nonatomic) NSString *labelITunes; // ivar: _labelITunes
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (copy, nonatomic) NSString *localMediaIdentifier; // ivar: _localMediaIdentifier
@property (retain, nonatomic) SFLatLng *location; // ivar: _location
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (nonatomic) int mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (copy, nonatomic) NSURL *messageURL; // ivar: _messageURL
@property (copy, nonatomic) NSString *offerType; // ivar: _offerType
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (nonatomic) BOOL requiresLocalMedia; // ivar: _requiresLocalMedia
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; // ivar: _shouldSearchDirectionsAlongCurrentRoute
@property (copy, nonatomic) NSArray *storeIdentifiers; // ivar: _storeIdentifiers
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *universalLibraryID; // ivar: _universalLibraryID


+(BOOL)supportsSecureCoding;
-(BOOL)hasDirectionsMode;
-(BOOL)hasIsITunes;
-(BOOL)hasIsOverlay;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(BOOL)hasMediaEntityType;
-(BOOL)hasRequiresLocalMedia;
-(BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif