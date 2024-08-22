// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSDAMPENINGENFORCEMENTSETTINGSMO_H
#define DRSDAMPENINGENFORCEMENTSETTINGSMO_H

@class NSManagedObject;


#import "DRSDampeningManagerMO.h"

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (nonatomic) BOOL enforcesResourceCap;
@property (nonatomic) BOOL enforcesResourceDownsampling;
@property (nonatomic) BOOL enforcesResourceHysteresis;
@property (nonatomic) BOOL enforcesSignatureCap;
@property (nonatomic) BOOL enforcesSignatureDownsampling;
@property (nonatomic) BOOL enforcesSignatureHysteresis;
@property (nonatomic) BOOL enforcesTotalCap;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManager;


+(id)fetchRequest;


@end


#endif