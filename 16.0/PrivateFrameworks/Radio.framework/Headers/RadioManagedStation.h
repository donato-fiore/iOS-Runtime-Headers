// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIOMANAGEDSTATION_H
#define RADIOMANAGEDSTATION_H

@class NSManagedObject, NSData, NSURL, NSString, NSDictionary, NSArray;



@interface RadioManagedStation : NSManagedObject

@property (retain, nonatomic) NSData *adData;
@property (nonatomic) NSInteger adamID;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSData *artworkURLData;
@property (copy, nonatomic) NSString *coreSeedName;
@property (copy, nonatomic) NSDictionary *debugDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL editEnabled;
@property (retain, nonatomic) NSArray *editableFields;
@property (nonatomic, getter=isFeatured) BOOL featured;
@property (nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property (nonatomic) BOOL hasSkipRules;
@property (nonatomic) NSUInteger impressionThreshold;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL likesEnabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger persistentID;
@property (nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (nonatomic, getter=isPreviewOnly) BOOL previewOnly;
@property (nonatomic) BOOL requiresSubscription;
@property (retain, nonatomic) NSArray *seedTracks;
@property (copy, nonatomic) NSString *shareToken;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
@property (nonatomic) BOOL skipEnabled;
@property (nonatomic) int skipFrequency;
@property (copy, nonatomic) NSString *skipIdentifier;
@property (nonatomic) CGFloat skipInterval;
@property (copy, nonatomic) NSArray *skipTimestamps;
@property (nonatomic) NSInteger songMixType;
@property (nonatomic) int sortOrder;
@property (nonatomic, getter=isSponsored) BOOL sponsored;
@property (copy, nonatomic) NSString *stationDescription;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) NSInteger stationID;
@property (copy, nonatomic) NSString *stationStringID;
@property (retain, nonatomic) NSURL *streamURL;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (nonatomic) int subscriberCount;
@property (nonatomic) BOOL virtualPlayEnabled;


+(id)defaultPropertiesToFetch;
-(id)additionalReferencedTrackDescriptors;
-(id)feedbackDictionaryRepresentation;
-(id)streamCertificateURL;
-(id)streamKeyURL;
-(void)setStreamCertificateURL:(id)arg0 ;
-(void)setStreamKeyURL:(id)arg0 ;


@end


#endif