// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXPROVIDERCONFIGURATION_H
#define CXPROVIDERCONFIGURATION_H

@class NSString, NSArray, NSData, NSOrderedSet, NSSet;
@protocol NSSecureCoding, CXCopying, NSCopying;

#import <Foundation/Foundation.h>

#import "CXSandboxExtendedURL.h"

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>



@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emergencyHandles; // ivar: _emergencyHandles
@property (copy, nonatomic) NSArray *emergencyLabeledHandles; // ivar: _emergencyLabeledHandles
@property (copy, nonatomic) NSArray *handoffIdentifiers; // ivar: _handoffIdentifiers
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *iconTemplateImageData; // ivar: _iconTemplateImageData
@property (nonatomic) BOOL includesCallsInRecents; // ivar: _includesCallsInRecents
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) NSUInteger maximumCallGroups; // ivar: _maximumCallGroups
@property (nonatomic) NSUInteger maximumCallsPerCallGroup; // ivar: _maximumCallsPerCallGroup
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities; // ivar: _prioritizedSenderIdentities
@property (retain, nonatomic) NSString *ringtoneSound;
@property (copy, nonatomic) CXSandboxExtendedURL *ringtoneSoundURL; // ivar: _ringtoneSoundURL
@property (copy, nonatomic) NSSet *senderIdentities;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedHandleTypes; // ivar: _supportedHandleTypes
@property (nonatomic) BOOL supportsAudioOnly; // ivar: _supportsAudioOnly
@property (nonatomic) BOOL supportsCurrentPlatform; // ivar: _supportsCurrentPlatform
@property (nonatomic) BOOL supportsEmergency; // ivar: _supportsEmergency
@property (nonatomic) BOOL supportsRinging; // ivar: _supportsRinging
@property (nonatomic) BOOL supportsVideo; // ivar: _supportsVideo
@property (nonatomic) BOOL supportsVoicemail; // ivar: _supportsVoicemail


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedName:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif