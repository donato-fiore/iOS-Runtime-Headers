// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMEDIAOFFER_H
#define SFMEDIAOFFER_H

@class NSString, NSDictionary, NSData, NSURL, NSArray;
@protocol SFMediaOffer, NSSecureCoding, NSCopying;


#import "SFActionItem.h"
#import "SFImage.h"
#import "SFPunchout.h"
#import "SFLatLng.h"

@interface SFMediaOffer : SFActionItem <SFMediaOffer, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFActionItem *actionItem; // ivar: _actionItem
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (retain, nonatomic) SFImage *baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) SFPunchout *customDirectionsPunchout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int directionsMode;
@property (copy, nonatomic) NSString *email;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *icon;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (copy, nonatomic) NSString *interactionContentType;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isITunes;
@property (nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) CGFloat latitude;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (retain, nonatomic) SFLatLng *location;
@property (nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provider;
@property (retain, nonatomic) SFPunchout *punchout;
@property (nonatomic) BOOL requiresLocalMedia;
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSString *sublabel; // ivar: _sublabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *universalLibraryID;


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsEnabled;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif