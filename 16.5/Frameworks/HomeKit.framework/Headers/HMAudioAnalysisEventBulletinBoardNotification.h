// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOANALYSISEVENTBULLETINBOARDNOTIFICATION_H
#define HMAUDIOANALYSISEVENTBULLETINBOARDNOTIFICATION_H

@class NSUUID;


#import "HMBulletinBoardNotification.h"

@interface HMAudioAnalysisEventBulletinBoardNotification : HMBulletinBoardNotification

@property (copy) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly) NSUInteger options;


+(id)predicateForAudioAnalysisOptions:(NSUInteger)arg0 ;
-(id)initWithBulletinBoardNotification:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)commitWithCompletionHandler:(id)arg0 ;


@end


#endif