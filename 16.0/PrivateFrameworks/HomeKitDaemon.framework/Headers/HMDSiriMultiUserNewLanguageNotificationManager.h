// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRIMULTIUSERNEWLANGUAGENOTIFICATIONMANAGER_H
#define HMDSIRIMULTIUSERNEWLANGUAGENOTIFICATIONMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate;


#import "HMDSiriMultiUserNewLanguageNotificationManagerContext.h"

@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject <HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate>



@property (readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithContext:(id)arg0 ;
-(void)_postNotificationIfNecessaryForMediaAccessory:(id)arg0 ;
-(void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;
-(void)mediaAccessory:(id)arg0 didUpdateSoftwareToVersion:(id)arg1 ;


@end


#endif