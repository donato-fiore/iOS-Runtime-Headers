// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRVOICEPROFILE_H
#define SSRVOICEPROFILE_H

@class NSString, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSRVoiceProfile : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *appDomain; // ivar: _appDomain
@property (readonly, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSUInteger productCategory;
@property (retain, nonatomic) NSString *profileBasePath; // ivar: _profileBasePath
@property (readonly, nonatomic) NSString *profileID; // ivar: _profileID
@property (readonly, nonatomic) BOOL profileLocallyAvailable;
@property (retain, nonatomic) NSNumber *profilePitch; // ivar: _profilePitch
@property (readonly, nonatomic) NSString *pruningCookie;
@property (readonly, nonatomic) NSString *siriProfileId; // ivar: _siriProfileId
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (readonly, nonatomic) NSString *voiceProfileBasePath;
@property (readonly, nonatomic) NSString *voiceProfileIdentity;
@property (readonly, nonatomic) NSString *voiceProfileImplicitCacheDirPath;
@property (readonly, nonatomic) NSUInteger voiceProfileVersion;


+(BOOL)supportsSecureCoding;
-(BOOL)_isSATMarkedWithMarker:(id)arg0 ;
-(BOOL)_markSATEnrollmentWithMarker:(id)arg0 ;
-(BOOL)deleteModelForSpidType:(NSUInteger)arg0 recognizerType:(NSUInteger)arg1 ;
-(BOOL)isMarkedSATEnrolled;
-(BOOL)isMarkedSATMigrated;
-(BOOL)markSATEnrollmentMigrated;
-(BOOL)markSATEnrollmentSuccess;
-(BOOL)updatePruningCookie:(id)arg0 ;
-(NSUInteger)_copyExplicitAudio:(id)arg0 withSpIdType:(NSUInteger)arg1 ;
-(id)_getProfileVersionFilePath;
-(id)_voiceProfilePathForSpidType:(NSUInteger)arg0 ;
-(id)addUtterances:(id)arg0 spIdType:(NSUInteger)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)getEnrollmentUtterancesForModelType:(NSUInteger)arg0 ;
-(id)getExplicitEnrollmentUtterancesForType:(NSUInteger)arg0 ;
-(id)getExplicitMarkedEnrollmentUtterancesForType:(NSUInteger)arg0 ;
-(id)getImplicitEnrollmentUtterancesForType:(NSUInteger)arg0 ;
-(id)getImplicitEnrollmentUtterancesPriorTo:(id)arg0 forType:(NSUInteger)arg1 ;
-(id)importVoiceProfileAtPath:(id)arg0 ;
-(id)initNewVoiceProfileWithLocale:(id)arg0 withAppDomain:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)voiceProfileAudioDirPathForSpidType:(NSUInteger)arg0 ;
-(id)voiceProfileModelDirForSpidType:(NSUInteger)arg0 recognizerType:(NSUInteger)arg1 ;
-(id)voiceProfileModelFilePathForRecognizerType:(NSUInteger)arg0 spIdType:(NSUInteger)arg1 ;
-(void)_updateVoiceProfileVersionFile;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSharedSiriProfileId:(id)arg0 ;


@end


#endif