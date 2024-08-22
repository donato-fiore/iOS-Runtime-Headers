// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMCONFIGURATION_H
#define MDMCONFIGURATION_H

@class NSString, NSArray, NSURL, NSDictionary, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMConfiguration : NSObject

@property (retain, nonatomic) NSString *easEnrollmentID; // ivar: _easEnrollmentID
@property (retain, nonatomic) NSString *enrollmentID; // ivar: _enrollmentID
@property (retain, nonatomic) NSString *enrollmentMode; // ivar: _enrollmentMode
@property (nonatomic) BOOL isUserEnrollment; // ivar: _isUserEnrollment
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (nonatomic) NSUInteger memberQueueAccessRights; // ivar: _memberQueueAccessRights
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs; // ivar: _memberQueueCheckInPinnedSecCertificateRefs
@property (retain, nonatomic) NSURL *memberQueueCheckInURL; // ivar: _memberQueueCheckInURL
@property (nonatomic) *__SecIdentity memberQueueIdentity; // ivar: _memberQueueIdentity
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions; // ivar: _memberQueueMDMOptions
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // ivar: _memberQueueManagingProfileIdentifier
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo; // ivar: _memberQueueOrganizationInfo
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired; // ivar: _memberQueuePinningRevocationCheckRequired
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval; // ivar: _memberQueuePollingInterval
@property (retain, nonatomic) NSString *memberQueuePushMagic; // ivar: _memberQueuePushMagic
@property (copy, nonatomic) NSArray *memberQueueServerCapabilities; // ivar: _memberQueueServerCapabilities
@property (retain, nonatomic) NSURL *memberQueueServerURL; // ivar: _memberQueueServerURL
@property (nonatomic) BOOL memberQueueSignMessage; // ivar: _memberQueueSignMessage
@property (retain, nonatomic) NSString *memberQueueTopic; // ivar: _memberQueueTopic
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS; // ivar: _memberQueueUseDevelopmentAPNS
@property (retain, nonatomic) NSString *personaID; // ivar: _personaID
@property (retain, nonatomic) NSString *rmAccountID; // ivar: _rmAccountID
@property (nonatomic) BOOL supportUserChannel; // ivar: _supportUserChannel


+(id)sharedConfiguration;
-(BOOL)_writeProperties:(id)arg0 channelType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)readConfigurationOutError:(*id)arg0 ;
-(id)_mdmPropertiesFilePathForChannelType:(NSUInteger)arg0 ;
-(id)_readPropertiesForChannelType:(NSUInteger)arg0 createIfMissingFile:(BOOL)arg1 error:(*id)arg2 ;
-(id)getPropertyForKey:(id)arg0 channelType:(NSUInteger)arg1 ;
-(id)init;
-(id)setPropertyForKey:(id)arg0 value:(id)arg1 channelType:(NSUInteger)arg2 ;
-(void)refreshDetailsFromDisk;


@end


#endif