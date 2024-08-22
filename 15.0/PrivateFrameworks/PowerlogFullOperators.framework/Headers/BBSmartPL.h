// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSMARTPL_H
#define BBSMARTPL_H

@class PLEntryNotificationOperatorComposition, PLTelephonyConnection, NSDate;

#import <Foundation/Foundation.h>

#import "PLSmartPLService.h"

@interface BBSmartPL : NSObject

@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback; // ivar: _bbHwOtherCallback
@property (weak) PLTelephonyConnection *connection; // ivar: _connection
@property CGFloat cxoDuration; // ivar: _cxoDuration
@property (retain) NSDate *lastLogDate; // ivar: _lastLogDate
@property CGFloat logDuration; // ivar: _logDuration
@property (weak) PLSmartPLService *operator; // ivar: _operator


-(void)handleMavBBHwOtherCallback:(id)arg0 ;
-(void)startWithOperator:(id)arg0 ;
-(void)triggerBBCoreDump;


@end


#endif