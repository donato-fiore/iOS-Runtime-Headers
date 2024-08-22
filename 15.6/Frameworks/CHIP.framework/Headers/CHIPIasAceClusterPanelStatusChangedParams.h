// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASACECLUSTERPANELSTATUSCHANGEDPARAMS_H
#define CHIPIASACECLUSTERPANELSTATUSCHANGEDPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPIasAceClusterPanelStatusChangedParams : NSObject

@property (retain, nonatomic) NSNumber *alarmStatus; // ivar: _alarmStatus
@property (retain, nonatomic) NSNumber *audibleNotification; // ivar: _audibleNotification
@property (retain, nonatomic) NSNumber *panelStatus; // ivar: _panelStatus
@property (retain, nonatomic) NSNumber *secondsRemaining; // ivar: _secondsRemaining


-(id)init;


@end


#endif