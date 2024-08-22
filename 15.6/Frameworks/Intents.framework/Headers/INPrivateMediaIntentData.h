// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPRIVATEMEDIAINTENTDATA_H
#define INPRIVATEMEDIAINTENTDATA_H

@class NSNumber, NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INHomeAutomationEntityProvider.h"
#import "INAppIdentifier.h"
#import "INSpeakerIDInfo.h"
#import "INWholeHouseAudioMetadata.h"

@interface INPrivateMediaIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger asrConfidenceLevel; // ivar: _asrConfidenceLevel
@property (readonly, copy, nonatomic) NSNumber *asrConfidenceScore; // ivar: _asrConfidenceScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fallbackUsername; // ivar: _fallbackUsername
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INHomeAutomationEntityProvider *homeAutomationEntityProvider; // ivar: _homeAutomationEntityProvider
@property (copy, nonatomic) NSNumber *isAppAttributionRequired; // ivar: _isAppAttributionRequired
@property (readonly, copy, nonatomic) NSNumber *isAppCorrection; // ivar: _isAppCorrection
@property (readonly, nonatomic) NSInteger nlConfidenceLevel; // ivar: _nlConfidenceLevel
@property (readonly, copy, nonatomic) NSNumber *nlConfidenceScore; // ivar: _nlConfidenceScore
@property (copy, nonatomic) INAppIdentifier *proxiedThirdPartyAppInfo; // ivar: _proxiedThirdPartyAppInfo
@property (copy, nonatomic) NSString *resolvedSharedUserID; // ivar: _resolvedSharedUserID
@property (copy, nonatomic) INSpeakerIDInfo *speakerIDInfo; // ivar: _speakerIDInfo
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *useDialogMemoryForAttribution; // ivar: _useDialogMemoryForAttribution
@property (readonly, copy, nonatomic) INWholeHouseAudioMetadata *wholeHouseAudioMetadata; // ivar: _wholeHouseAudioMetadata


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeakerIDInfo:(id)arg0 proxiedThirdPartyAppInfo:(id)arg1 isAppAttributionRequired:(id)arg2 useDialogMemoryForAttribution:(id)arg3 isAppCorrection:(id)arg4 fallbackUsername:(id)arg5 wholeHouseAudioMetadata:(id)arg6 nlConfidenceScore:(id)arg7 nlConfidenceLevel:(NSInteger)arg8 asrConfidenceScore:(id)arg9 asrConfidenceLevel:(NSInteger)arg10 ;
-(id)initWithSpeakerIDInfo:(id)arg0 proxiedThirdPartyAppInfo:(id)arg1 isAppAttributionRequired:(id)arg2 useDialogMemoryForAttribution:(id)arg3 isAppCorrection:(id)arg4 fallbackUsername:(id)arg5 wholeHouseAudioMetadata:(id)arg6 nlConfidenceScore:(id)arg7 nlConfidenceLevel:(NSInteger)arg8 asrConfidenceScore:(id)arg9 asrConfidenceLevel:(NSInteger)arg10 resolvedSharedUserID:(id)arg11 ;
-(id)initWithSpeakerIDInfo:(id)arg0 proxiedThirdPartyAppInfo:(id)arg1 isAppAttributionRequired:(id)arg2 useDialogMemoryForAttribution:(id)arg3 isAppCorrection:(id)arg4 fallbackUsername:(id)arg5 wholeHouseAudioMetadata:(id)arg6 nlConfidenceScore:(id)arg7 nlConfidenceLevel:(NSInteger)arg8 asrConfidenceScore:(id)arg9 asrConfidenceLevel:(NSInteger)arg10 resolvedSharedUserID:(id)arg11 homeAutomationEntityProvider:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif