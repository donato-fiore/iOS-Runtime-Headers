// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIAENTITY_H
#define VUIMEDIAENTITY_H

@class NSNumber, NSDate, NSString, _TVContentRating, NSMutableDictionary, NSSet;
@protocol VUIMediaEntityIdentifier, VUIMediaEntityIdentifierInternal;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityKind.h"
#import "VUIMediaLibrary.h"
#import "VUIMediaEntityType.h"

@interface VUIMediaEntity : NSObject

@property (readonly, copy, nonatomic) NSNumber *HLSAudioCapability;
@property (readonly, copy, nonatomic) NSNumber *HLSColorCapability;
@property (readonly, copy, nonatomic) NSNumber *HLSResolution;
@property (readonly, copy, nonatomic) NSDate *addedDate;
@property (readonly, copy, nonatomic) NSNumber *audioCapability;
@property (readonly, copy, nonatomic) NSString *brandID;
@property (readonly, copy, nonatomic) NSString *brandName;
@property (nonatomic) BOOL cachesPropertiesOnFirstAccess; // ivar: _cachesPropertiesOnFirstAccess
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSNumber *colorCapability;
@property (readonly, copy, nonatomic) NSString *contentDescription;
@property (readonly, copy, nonatomic) _TVContentRating *contentRating;
@property (readonly, copy, nonatomic) NSString *coverArtImageIdentifier;
@property (retain, nonatomic) NSMutableDictionary *firstAccessPropertiesCache; // ivar: _firstAccessPropertiesCache
@property (readonly, copy, nonatomic) NSString *genreTitle;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal; // ivar: _identifierInternal
@property (readonly, copy, nonatomic) NSNumber *isLocal;
@property (readonly, nonatomic) VUIMediaEntityKind *kind; // ivar: _kind
@property (nonatomic, getter=hasLocalChanges) BOOL localChanges; // ivar: _localChanges
@property (readonly, nonatomic) BOOL markedAsDeleted;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) NSNumber *playedState;
@property (readonly, copy, nonatomic) NSNumber *purchaseHistoryID;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSNumber *releaseYear;
@property (readonly, nonatomic) NSSet *requestedProperties; // ivar: _requestedProperties
@property (readonly, copy, nonatomic) NSNumber *resolution;
@property (readonly, copy, nonatomic) NSNumber *seasonNumber;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (readonly, copy, nonatomic) NSString *showTitle;
@property (readonly, copy, nonatomic) NSString *sortTitle;
@property (readonly, copy, nonatomic) NSNumber *storeID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) VUIMediaEntityType *type;


-(BOOL)_didRequestPropertyWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg0 ;
-(NSUInteger)hash;
-(id)_defaultValueForPropertyDescriptor:(id)arg0 ;
-(id)_propertyValueForKey:(id)arg0 ;
// -(id)_propertyValueWithBlock:(id)arg0 forKey:(unk)arg1  ;
-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)assetController;
-(id)description;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(void)populateMetadata;


@end


#endif