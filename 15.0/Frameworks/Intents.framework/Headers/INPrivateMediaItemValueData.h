// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INPRIVATEMEDIAITEMVALUEDATA_H
#define INPRIVATEMEDIAITEMVALUEDATA_H

@class NSNumber, NSString, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INPrivateMediaItemValueData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger ampConfidenceLevel; // ivar: _ampConfidenceLevel
@property (readonly, copy, nonatomic) NSNumber *ampConfidenceScore; // ivar: _ampConfidenceScore
@property (readonly, copy, nonatomic) NSString *assetInfo; // ivar: _assetInfo
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, copy, nonatomic) NSNumber *isAvailable; // ivar: _isAvailable
@property (readonly, copy, nonatomic) NSNumber *isHardBan; // ivar: _isHardBan
@property (readonly, copy, nonatomic) NSArray *mediaSubItems; // ivar: _mediaSubItems
@property (readonly, copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly, copy, nonatomic) NSString *providerAppName; // ivar: _providerAppName
@property (readonly, copy, nonatomic) NSString *punchoutURI; // ivar: _punchoutURI
@property (readonly, copy, nonatomic) NSString *recommendationId; // ivar: _recommendationId
@property (readonly, copy, nonatomic) NSNumber *requiresSubscription; // ivar: _requiresSubscription
@property (readonly, copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount; // ivar: _sharedUserIdFromPlayableMusicAccount
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *universalResourceLink; // ivar: _universalResourceLink


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecommendationId:(id)arg0 assetInfo:(id)arg1 mediaSubItems:(id)arg2 ;
-(id)initWithRecommendationId:(id)arg0 assetInfo:(id)arg1 sharedUserIdFromPlayableMusicAccount:(id)arg2 punchoutURI:(id)arg3 mediaSubItems:(id)arg4 ;
-(id)initWithRecommendationId:(id)arg0 assetInfo:(id)arg1 sharedUserIdFromPlayableMusicAccount:(id)arg2 punchoutURI:(id)arg3 requiresSubscription:(id)arg4 provider:(id)arg5 isAvailable:(id)arg6 isHardBan:(id)arg7 bundleId:(id)arg8 universalResourceLink:(id)arg9 providerAppName:(id)arg10 internalSignals:(id)arg11 ampConfidenceScore:(id)arg12 ampConfidenceLevel:(NSInteger)arg13 mediaSubItems:(id)arg14 ;
-(id)initWithRecommendationId:(id)arg0 assetInfo:(id)arg1 sharedUserIdFromPlayableMusicAccount:(id)arg2 punchoutURI:(id)arg3 requiresSubscription:(id)arg4 provider:(id)arg5 isAvailable:(id)arg6 isHardBan:(id)arg7 bundleId:(id)arg8 universalResourceLink:(id)arg9 providerAppName:(id)arg10 internalSignals:(id)arg11 mediaSubItems:(id)arg12 ;
-(id)initWithRecommendationId:(id)arg0 assetInfo:(id)arg1 sharedUserIdFromPlayableMusicAccount:(id)arg2 punchoutURI:(id)arg3 requiresSubscription:(id)arg4 provider:(id)arg5 isAvailable:(id)arg6 isHardBan:(id)arg7 bundleId:(id)arg8 universalResourceLink:(id)arg9 providerAppName:(id)arg10 mediaSubItems:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif