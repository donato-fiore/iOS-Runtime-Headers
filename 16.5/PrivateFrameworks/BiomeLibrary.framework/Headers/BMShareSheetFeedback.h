// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSHARESHEETFEEDBACK_H
#define BMSHARESHEETFEEDBACK_H

@class BMEventBase, NSString, NSData, NSArray;
@protocol BMStoreData;



@interface BMShareSheetFeedback : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *adaptedModelRecipeID; // ivar: _adaptedModelRecipeID
@property (readonly, nonatomic) NSData *attachments; // ivar: _attachments
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *derivedIntentIdentifier; // ivar: _derivedIntentIdentifier
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int engagementType; // ivar: _engagementType
@property (readonly, nonatomic) NSString *extensionContextUUID; // ivar: _extensionContextUUID
@property (nonatomic) BOOL hasICloudFamilyInvocation; // ivar: _hasICloudFamilyInvocation
@property (nonatomic) BOOL hasIndexSelected; // ivar: _hasIndexSelected
@property (nonatomic) BOOL hasIsAdaptedModelCreated; // ivar: _hasIsAdaptedModelCreated
@property (nonatomic) BOOL hasIsAdaptedModelUsed; // ivar: _hasIsAdaptedModelUsed
@property (nonatomic) BOOL hasNumberOfVisibleSuggestions; // ivar: _hasNumberOfVisibleSuggestions
@property (nonatomic) BOOL hasPeopleSuggestionsDisabled; // ivar: _hasPeopleSuggestionsDisabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL iCloudFamilyInvocation; // ivar: _iCloudFamilyInvocation
@property (readonly, nonatomic) int indexSelected; // ivar: _indexSelected
@property (readonly, nonatomic) BOOL isAdaptedModelCreated; // ivar: _isAdaptedModelCreated
@property (readonly, nonatomic) BOOL isAdaptedModelUsed; // ivar: _isAdaptedModelUsed
@property (readonly, nonatomic) NSArray *locationUUIDs; // ivar: _locationUUIDs
@property (readonly, nonatomic) NSData *modelSuggestionProxies; // ivar: _modelSuggestionProxies
@property (readonly, nonatomic) CGFloat numberOfVisibleSuggestions; // ivar: _numberOfVisibleSuggestions
@property (readonly, nonatomic) int peopleSuggestionsDisabled; // ivar: _peopleSuggestionsDisabled
@property (readonly, nonatomic) NSArray *photoSuggestedContacts; // ivar: _photoSuggestedContacts
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSString *reasonType; // ivar: _reasonType
@property (readonly, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *supportedBundleIDs; // ivar: _supportedBundleIDs
@property (readonly, nonatomic) NSString *targetBundleID; // ivar: _targetBundleID
@property (readonly, nonatomic) NSString *trackingID; // ivar: _trackingID
@property (readonly, nonatomic) NSString *transportBundleID; // ivar: _transportBundleID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDerivedIntentIdentifier:(id)arg0 targetBundleID:(id)arg1 extensionContextUUID:(id)arg2 attachments:(id)arg3 locationUUIDs:(id)arg4 photoSuggestedContacts:(id)arg5 modelSuggestionProxies:(id)arg6 adaptedModelRecipeID:(id)arg7 isAdaptedModelUsed:(id)arg8 isAdaptedModelCreated:(id)arg9 supportedBundleIDs:(id)arg10 peopleSuggestionsDisabled:(id)arg11 reasonType:(id)arg12 reason:(id)arg13 sourceBundleID:(id)arg14 transportBundleID:(id)arg15 numberOfVisibleSuggestions:(id)arg16 trackingID:(id)arg17 iCloudFamilyInvocation:(id)arg18 engagementType:(int)arg19 indexSelected:(id)arg20 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif