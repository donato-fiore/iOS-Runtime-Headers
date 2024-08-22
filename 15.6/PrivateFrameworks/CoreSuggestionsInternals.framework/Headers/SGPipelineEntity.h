// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPIPELINEENTITY_H
#define SGPIPELINEENTITY_H

@class _PASLazyResult, NSString, NSArray, NSSet, NSMutableDictionary, INInteraction;


#import "SGEntity.h"
#import "SGHarvestQueueMetrics.h"
#import "SGSimpleMailMessage.h"
#import "SGMessage.h"
#import "SGTextMessage.h"

@interface SGPipelineEntity : SGEntity {
    BOOL _flushExternalEnrichments;
    BOOL _fullDownloadRequested;
    ? _inhumanFeatures;
    _opaque_pthread_mutex_t _dissectorLock;
    BOOL _useMailMessageHtmlParser;
    BOOL _messageInhumannessChecked;
    _NSRange _dataDetectorsSignatureForTesting;
    BOOL _overrideDataDetectorSignatureForTesting;
    _PASLazyResult *_lazySnippetsContent;
}


@property (readonly, nonatomic) NSString *accountType; // ivar: _accountType
@property (readonly, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *authorMatchingContacts; // ivar: _authorMatchingContacts
@property (retain, nonatomic) NSSet *authorMatchingContactsKeys; // ivar: _authorMatchingContactsKeys
@property (nonatomic) BOOL contactInformationExtracted; // ivar: _contactInformationExtracted
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSMutableDictionary *emailToCanonicalEmailCache; // ivar: _emailToCanonicalEmailCache
@property (retain, nonatomic) NSArray *enrichments; // ivar: _enrichments
@property (retain, nonatomic) NSArray *externalEnrichments; // ivar: _externalEnrichments
@property (readonly, getter=hasFullDownloadBeenRequested) BOOL fullDownloadRequested;
@property (retain, nonatomic) SGHarvestQueueMetrics *harvestMetrics; // ivar: _harvestMetrics
@property (readonly, nonatomic) *? inhumanFeatures;
@property (readonly, nonatomic) NSArray *instantMessageAddresses; // ivar: _instantMessageAddresses
@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (retain) NSArray *invalidatedMessageIdentifiers; // ivar: _invalidatedMessageIdentifiers
@property (readonly, nonatomic) SGSimpleMailMessage *mailMessage; // ivar: _mailMessage
@property (readonly, nonatomic) SGMessage *message; // ivar: _message
@property (nonatomic) BOOL needsSourceVerification; // ivar: _needsSourceVerification
@property (nonatomic) BOOL pendingVerification; // ivar: _pendingVerification
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (nonatomic) _NSRange plainTextSigRange; // ivar: _plainTextSigRange
@property (readonly, nonatomic) NSString *snippetsContent;
@property (retain, nonatomic) NSArray *taggedCharacterRanges; // ivar: _taggedCharacterRanges
@property (readonly, nonatomic) SGTextMessage *textMessage; // ivar: _textMessage


+(id)fromCloudKitRecord:(id)arg0 ;
-(BOOL)hasEventEnrichment;
-(BOOL)isInhuman;
-(NSUInteger)eventEnrichmentsCount;
-(id)_initWithInteractionIdentifier:(id)arg0 fromBundleIdentifier:(id)arg1 creationTime:(id)arg2 ;
-(id)birthday:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(id)contactDetailsWithType:(NSUInteger)arg0 ;
-(id)initWithDuplicateKey:(id)arg0 title:(id)arg1 ;
-(id)initWithEmailMessage:(id)arg0 ;
-(id)initWithIntentPersonAtDate:(id)arg0 bundleId:(id)arg1 handle:(id)arg2 displayName:(id)arg3 ;
-(id)initWithInteraction:(id)arg0 fromBundleIdentifier:(id)arg1 ;
-(id)initWithInteraction:(id)arg0 identifier:(id)arg1 fromBundleIdentifier:(id)arg2 ;
-(id)initWithInteractionIdentifier:(id)arg0 fromBundleIdentifier:(id)arg1 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithTextMessage:(id)arg0 ;
-(void)_lazyCheckMessageForHumanness;
-(void)acquireDissectorLock;
-(void)addBirthdayEnrichment:(id)arg0 ;
-(void)addDetectedBirthday:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetectedEmailAddress:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetectedInstantMessageAddress:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetectedPhoneNumber:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetectedPostalAddress:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetectedSocialProfile:(id)arg0 forIdentity:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 extractionInfo:(id)arg4 ;
-(void)addDetection:(id)arg0 forIdentity:(id)arg1 extractionInfo:(id)arg2 ;
-(void)addEmailAddressEnrichment:(id)arg0 ;
-(void)addEnrichment:(id)arg0 ;
-(void)addEnrichments:(id)arg0 ;
-(void)addExternalEnrichment:(id)arg0 ;
-(void)addInstantMessageAddressEnrichment:(id)arg0 ;
-(void)addOrReplaceEventEnrichment:(id)arg0 ;
-(void)addOrReplacePreferredEnrichment:(id)arg0 ;
-(void)addSocialProfileEnrichment:(id)arg0 ;
-(void)addTaggedCharacterRanges:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePeople:(id)arg0 ;
-(void)flushExternalEnrichmentsUponDealloc;
-(void)releaseDissectorLock;
-(void)removeExternalEnrichmentAtIndex:(NSUInteger)arg0 ;
-(void)requestFullDownload;
-(void)runWithDissectorLock:(id)arg0 ;
-(void)setCreationTimestamp:(struct SGUnixTimestamp_ )arg0 ;
-(void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ )arg0 ;
-(void)stripEventInformation;


@end


#endif