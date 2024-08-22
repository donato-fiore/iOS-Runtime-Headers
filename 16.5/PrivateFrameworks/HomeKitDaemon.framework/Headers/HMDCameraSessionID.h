// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASESSIONID_H
#define HMDCAMERASESSIONID_H

@class HMFObject, NSString, NSMutableDictionary;
@protocol NSCopying;



@interface HMDCameraSessionID : HMFObject <NSCopying>

 {
    NSString *_description;
}


@property (readonly) NSMutableDictionary *deviceMilestones; // ivar: _deviceMilestones
@property (readonly) NSString *deviceSectionName; // ivar: _deviceSectionName
@property (readonly, copy) NSString *hostProcessBundleIdentifier; // ivar: _hostProcessBundleIdentifier
@property (readonly) NSMutableDictionary *milestones; // ivar: _milestones
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly, getter=isSPIClient) BOOL spiClient; // ivar: _spiClient


+(id)hostProcessBundleIdentifierForMessage:(id)arg0 ;
+(id)millisecondsSince1970;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSessionID:(id)arg0 hostProcessBundleIdentifier:(id)arg1 isSPIClient:(BOOL)arg2 deviceSectionName:(id)arg3 description:(id)arg4 ;
-(id)initWithSessionID:(id)arg0 message:(id)arg1 description:(id)arg2 ;
-(void)addParameterFor:(id)arg0 value:(id)arg1 ;
-(void)markMilestoneFor:(id)arg0 ;
-(void)markMilestoneForPath:(id)arg0 ;
-(void)setParameterFor:(id)arg0 value:(id)arg1 ;
-(void)setParameterForPath:(id)arg0 value:(id)arg1 ;


@end


#endif