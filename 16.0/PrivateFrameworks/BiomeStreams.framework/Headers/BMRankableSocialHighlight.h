// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMRANKABLESOCIALHIGHLIGHT_H
#define BMRANKABLESOCIALHIGHLIGHT_H

@class NSArray, NSString, NSDictionary, NSDate, NSNumber, NSURL;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"
#import "BMSocialHighlightContact.h"

@interface BMRankableSocialHighlight : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSArray *applicationIdentifiers; // ivar: _applicationIdentifiers
@property (readonly, nonatomic) NSString *attributionIdentifier; // ivar: _attributionIdentifier
@property (readonly, nonatomic) NSString *batchIdentifier; // ivar: _batchIdentifier
@property (readonly, nonatomic) NSDictionary *calculatedFeatures; // ivar: _calculatedFeatures
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSString *clientVariant; // ivar: _clientVariant
@property (readonly, nonatomic) NSDate *contentCreationDate; // ivar: _contentCreationDate
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSString *groupPhotoPath;
@property (readonly, nonatomic) NSString *groupPhotoPathDigest; // ivar: _groupPhotoPathDigest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *highlightIdentifier; // ivar: _highlightIdentifier
@property (readonly, nonatomic) NSUInteger highlightType; // ivar: _highlightType
@property (readonly, nonatomic) NSNumber *isConversationAutoDonating; // ivar: _isConversationAutoDonating
@property (readonly, nonatomic) NSNumber *isPrimary; // ivar: _isPrimary
@property (readonly, nonatomic) NSString *originatingDeviceId; // ivar: _originatingDeviceId
@property (readonly, nonatomic) NSNumber *rank; // ivar: _rank
@property (readonly, nonatomic) NSDate *rankingDate; // ivar: _rankingDate
@property (readonly, nonatomic) NSString *resolvedUrl; // ivar: _resolvedUrl
@property (readonly, nonatomic) NSURL *resourceUrl; // ivar: _resourceUrl
@property (readonly, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, nonatomic) BMSocialHighlightContact *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *syndicationDate; // ivar: _syndicationDate


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(NSUInteger)_socialHighlightTypeForProtoType:(int)arg0 ;
-(id)encodeAsProto;
-(id)initWithHighlightIdentifier:(id)arg0 highlightType:(NSUInteger)arg1 syndicationDate:(id)arg2 sourceBundleId:(id)arg3 applicationIdentifiers:(id)arg4 resourceUrl:(id)arg5 sender:(id)arg6 domainIdentifier:(id)arg7 batchIdentifier:(id)arg8 calculatedFeatures:(id)arg9 clientIdentifier:(id)arg10 contentCreationDate:(id)arg11 groupPhotoPath:(id)arg12 displayName:(id)arg13 isPrimary:(id)arg14 attributionIdentifier:(id)arg15 rank:(id)arg16 score:(id)arg17 isConversationAutoDonating:(id)arg18 originatingDeviceId:(id)arg19 rankingDate:(id)arg20 resolvedUrl:(id)arg21 ;
-(id)initWithHighlightIdentifier:(id)arg0 highlightType:(NSUInteger)arg1 syndicationDate:(id)arg2 sourceBundleId:(id)arg3 applicationIdentifiers:(id)arg4 resourceUrl:(id)arg5 sender:(id)arg6 domainIdentifier:(id)arg7 batchIdentifier:(id)arg8 calculatedFeatures:(id)arg9 clientIdentifier:(id)arg10 contentCreationDate:(id)arg11 groupPhotoPathDigest:(id)arg12 displayName:(id)arg13 isPrimary:(id)arg14 attributionIdentifier:(id)arg15 rank:(id)arg16 score:(id)arg17 isConversationAutoDonating:(id)arg18 originatingDeviceId:(id)arg19 rankingDate:(id)arg20 resolvedUrl:(id)arg21 ;
-(id)initWithHighlightIdentifier:(id)arg0 highlightType:(NSUInteger)arg1 syndicationDate:(id)arg2 sourceBundleId:(id)arg3 applicationIdentifiers:(id)arg4 resourceUrl:(id)arg5 sender:(id)arg6 domainIdentifier:(id)arg7 batchIdentifier:(id)arg8 calculatedFeatures:(id)arg9 clientIdentifier:(id)arg10 contentCreationDate:(id)arg11 groupPhotoPathDigest:(id)arg12 displayName:(id)arg13 isPrimary:(id)arg14 attributionIdentifier:(id)arg15 rank:(id)arg16 score:(id)arg17 isConversationAutoDonating:(id)arg18 originatingDeviceId:(id)arg19 rankingDate:(id)arg20 resolvedUrl:(id)arg21 clientVariant:(id)arg22 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;
-(int)_protoType;


@end


#endif