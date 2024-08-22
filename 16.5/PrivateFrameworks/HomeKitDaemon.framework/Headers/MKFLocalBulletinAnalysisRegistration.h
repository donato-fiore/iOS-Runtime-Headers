// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINANALYSISREGISTRATION_H
#define MKFLOCALBULLETINANALYSISREGISTRATION_H



#import "MKFLocalBulletinAccessoryRegistration.h"

@interface MKFLocalBulletinAnalysisRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) NSInteger classifierOptions;


+(id)fetchAudioAnalysisModeRegistrationForAccessoryUUID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)fetchRequest;


@end


#endif