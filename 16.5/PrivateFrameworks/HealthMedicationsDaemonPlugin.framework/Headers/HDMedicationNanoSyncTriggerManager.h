// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONNANOSYNCTRIGGERMANAGER_H
#define HDMEDICATIONNANOSYNCTRIGGERMANAGER_H

@class HDProfile;

#import <Foundation/Foundation.h>


@interface HDMedicationNanoSyncTriggerManager : NSObject {
    HDProfile *_profile;
}


@property (copy, nonatomic) id *hkt_willTriggerNanoSyncHandler; // ivar: _hkt_willTriggerNanoSyncHandler


-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)triggerNanoSyncWithReason:(id)arg0 ;


@end


#endif