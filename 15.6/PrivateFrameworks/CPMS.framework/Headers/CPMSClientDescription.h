// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMSCLIENTDESCRIPTION_H
#define CPMSCLIENTDESCRIPTION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CPMSClientDescription : NSObject

@property (nonatomic) NSInteger clientId; // ivar: _clientId
@property (copy, nonatomic) id *getCurrentPower; // ivar: _getCurrentPower
@property (nonatomic) BOOL isContinuous; // ivar: _isContinuous
@property (copy, nonatomic) id *notificationCallback; // ivar: _notificationCallback
@property (nonatomic) unsigned int powerBudgetUpdateMinimumPeriod; // ivar: _powerBudgetUpdateMinimumPeriod
@property (retain, nonatomic) NSDictionary *powerLevels; // ivar: _powerLevels


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif