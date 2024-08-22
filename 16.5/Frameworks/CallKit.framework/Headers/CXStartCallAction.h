// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSTARTCALLACTION_H
#define CXSTARTCALLACTION_H

@class NSString, NSDate, NSUUID;
@protocol CXVideoAspectRatioDescriptor;


#import "CXCallAction.h"
#import "CXHandle.h"

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor>



@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSDate *dateStarted; // ivar: _dateStarted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergency) BOOL emergency; // ivar: _emergency
@property (copy, nonatomic) CXHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize localLandscapeAspectRatio; // ivar: _localLandscapeAspectRatio
@property (nonatomic) CGSize localPortraitAspectRatio; // ivar: _localPortraitAspectRatio
@property (retain, nonatomic) NSUUID *localSenderIdentityUUID; // ivar: _localSenderIdentityUUID
@property (nonatomic, getter=isRelay) BOOL relay; // ivar: _relay
@property (nonatomic, getter=isRetry) BOOL retry; // ivar: _retry
@property (nonatomic) BOOL shouldSuppressInCallUI; // ivar: _shouldSuppressInCallUI
@property (readonly) Class superclass;
@property (nonatomic, setter=setTTYType:) NSInteger ttyType; // ivar: _ttyType
@property (nonatomic, getter=isUpgrade) BOOL upgrade; // ivar: _upgrade
@property (nonatomic, getter=isVideo) BOOL video; // ivar: _video
@property (nonatomic, getter=isVoicemail) BOOL voicemail; // ivar: _voicemail


+(BOOL)supportsSecureCoding;
+(CGFloat)timeout;
-(BOOL)shouldTimeout;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 handle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithDateStarted:(id)arg0 ;
-(void)updateAsFulfilledWithDateStarted:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif