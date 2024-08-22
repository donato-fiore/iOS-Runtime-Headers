// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMAPPACTIVITY_H
#define BMAPPACTIVITY_H

@class BMEventBase, NSString, NSDate;
@protocol BMStoreData;



@interface BMAppActivity : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_expirationDate;
    CGFloat _raw_expirationDate;
}


@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) BOOL beginningOfActivity; // ivar: _beginningOfActivity
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL hasBeginningOfActivity; // ivar: _hasBeginningOfActivity
@property (nonatomic) BOOL hasIsEligibleForPrediction; // ivar: _hasIsEligibleForPrediction
@property (nonatomic) BOOL hasIsPubliclyIndexable; // ivar: _hasIsPubliclyIndexable
@property (nonatomic) BOOL hasShortcutAvailability; // ivar: _hasShortcutAvailability
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEligibleForPrediction; // ivar: _isEligibleForPrediction
@property (readonly, nonatomic) BOOL isPubliclyIndexable; // ivar: _isPubliclyIndexable
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *itemRelatedContentURL; // ivar: _itemRelatedContentURL
@property (readonly, nonatomic) NSString *itemRelatedUniqueIdentifier; // ivar: _itemRelatedUniqueIdentifier
@property (readonly, nonatomic) int shortcutAvailability; // ivar: _shortcutAvailability
@property (readonly, nonatomic) NSString *suggestedInvocationPhrase; // ivar: _suggestedInvocationPhrase
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *userActivityRequiredString; // ivar: _userActivityRequiredString
@property (readonly, nonatomic) NSString *userActivityUUID; // ivar: _userActivityUUID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 activityType:(id)arg1 beginningOfActivity:(id)arg2 contentDescription:(id)arg3 expirationDate:(id)arg4 isEligibleForPrediction:(id)arg5 isPubliclyIndexable:(id)arg6 itemIdentifier:(id)arg7 itemRelatedContentURL:(id)arg8 itemRelatedUniqueIdentifier:(id)arg9 shortcutAvailability:(id)arg10 suggestedInvocationPhrase:(id)arg11 title:(id)arg12 userActivityRequiredString:(id)arg13 userActivityUUID:(id)arg14 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif