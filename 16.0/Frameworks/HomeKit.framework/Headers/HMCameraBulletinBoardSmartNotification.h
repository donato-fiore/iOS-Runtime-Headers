// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERABULLETINBOARDSMARTNOTIFICATION_H
#define HMCAMERABULLETINBOARDSMARTNOTIFICATION_H

@class NSUUID;


#import "HMBulletinBoardNotification.h"
#import "HMCameraUserSettings.h"

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {
    NSUUID *_targetUUID;
}


@property (weak) HMCameraUserSettings *cameraUserSettings; // ivar: _cameraUserSettings
@property (readonly) NSUInteger personFamiliarityOptions;
@property (readonly) NSUInteger significantEventTypes;


+(id)personFamiliarityOptionsInPredicate:(id)arg0 ;
+(id)predicateForPersonFamiliarityOptions:(NSUInteger)arg0 ;
+(id)predicateForSignificantEventTypes:(NSUInteger)arg0 ;
+(id)predicateForSignificantEventTypes:(NSUInteger)arg0 personFamiliarityOptions:(NSUInteger)arg1 ;
+(id)significantEventTypesInPredicate:(id)arg0 ;
-(id)description;
-(id)initWithBulletinBoardNotification:(id)arg0 ;
-(id)targetUUID;
-(void)__configureWithContext:(id)arg0 cameraUserSettings:(id)arg1 ;
-(void)commitWithCompletionHandler:(id)arg0 ;


@end


#endif