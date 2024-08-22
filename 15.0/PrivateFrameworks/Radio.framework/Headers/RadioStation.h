// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOSTATION_H
#define RADIOSTATION_H

@class NSData, NSURL, NSString, NSDictionary, NSArray, NSManagedObject;
@protocol RadioManagedObjectWrapperProtocol;

#import <Foundation/Foundation.h>

#import "RadioArtworkCollection.h"
#import "RadioModel.h"

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol>



@property (retain, nonatomic) NSData *adData; // ivar: _adData
@property (nonatomic) NSInteger adamID; // ivar: _adamID
@property (readonly, nonatomic) RadioArtworkCollection *artworkCollection;
@property (copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSData *artworkURLData; // ivar: _artworkURLData
@property (copy, nonatomic) NSString *coreSeedName; // ivar: _coreSeedName
@property (readonly, nonatomic, getter=isDatabaseBacked) BOOL databaseBacked; // ivar: _databaseBacked
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *debugDictionary; // ivar: _debugDictionary
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL editEnabled; // ivar: _editEnabled
@property (retain, nonatomic) NSArray *editableFields; // ivar: _editableFields
@property (nonatomic, getter=isFeatured) BOOL featured; // ivar: _featured
@property (readonly, copy, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
@property (nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled; // ivar: _gatewayVideoAdEnabled
@property (nonatomic) BOOL hasSkipRules; // ivar: _hasSkipRules
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionThreshold; // ivar: _impressionThreshold
@property (nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (nonatomic) BOOL likesEnabled; // ivar: _likesEnabled
@property (readonly, nonatomic) NSManagedObject *managedObject; // ivar: _managedObject
@property (readonly, nonatomic) RadioModel *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement; // ivar: _premiumPlacement
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (nonatomic, getter=isPreviewOnly) BOOL previewOnly; // ivar: _previewOnly
@property (nonatomic) BOOL requiresSubscription; // ivar: _requiresSubscription
@property (retain, nonatomic) id *seedTracks; // ivar: _seedTracks
@property (copy, nonatomic) NSString *shareToken; // ivar: _shareToken
@property (nonatomic, getter=isShared) BOOL shared; // ivar: _shared
@property (nonatomic, getter=isSharingEnabled) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (nonatomic) BOOL skipEnabled; // ivar: _skipEnabled
@property (nonatomic) int skipFrequency; // ivar: _skipFrequency
@property (copy, nonatomic) NSString *skipIdentifier; // ivar: _skipIdentifier
@property (nonatomic) CGFloat skipInterval; // ivar: _skipInterval
@property (copy, nonatomic) NSArray *skipTimestamps; // ivar: _skipTimestamps
@property (nonatomic) NSInteger songMixType; // ivar: _songMixType
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (nonatomic, getter=isSponsored) BOOL sponsored; // ivar: _sponsored
@property (copy, nonatomic) NSString *stationDescription; // ivar: _stationDescription
@property (copy, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (nonatomic) NSInteger stationID; // ivar: _stationID
@property (copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (retain, nonatomic) NSURL *streamCertificateURL; // ivar: _streamCertificateURL
@property (retain, nonatomic) NSURL *streamKeyURL; // ivar: _streamKeyURL
@property (retain, nonatomic) NSURL *streamURL; // ivar: _streamURL
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (nonatomic) int subscriberCount; // ivar: _subscriberCount
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trackPlaybackDescriptorQueue; // ivar: _trackPlaybackDescriptorQueue
@property (nonatomic) BOOL virtualPlayEnabled; // ivar: _virtualPlayEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)artworkURLForSize:(struct CGSize )arg0 expectedSize:(struct CGSize *)arg1 ;
-(id)initWithModel:(id)arg0 managedObject:(id)arg1 ;
-(void)_radioModelWasDeletedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif