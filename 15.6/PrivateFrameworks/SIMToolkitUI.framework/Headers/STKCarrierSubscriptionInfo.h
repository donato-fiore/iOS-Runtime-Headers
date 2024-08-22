// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKCARRIERSUBSCRIPTIONINFO_H
#define STKCARRIERSUBSCRIPTIONINFO_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "STKUSSDFilter.h"

@interface STKCarrierSubscriptionInfo : NSObject

@property (readonly, nonatomic) BOOL canShowClass0SMSOverInCallAlerts; // ivar: _canShowClass0SMSOverInCallAlerts
@property (readonly, nonatomic) BOOL showClass0SMSFromField; // ivar: _showClass0SMSFromField
@property (readonly, nonatomic) NSArray *ussdAlwaysFilteredPatterns; // ivar: _ussdAlwaysFilteredPatterns
@property (readonly, nonatomic) STKUSSDFilter *ussdFilter; // ivar: _ussdFilter
@property (readonly, nonatomic) NSArray *ussdSometimesFilteredPatterns; // ivar: _ussdSometimesFilteredPatterns


-(id)initWithShowClass0SMSFromField:(BOOL)arg0 canShowClass0SMSOverInCallAlerts:(BOOL)arg1 ussdAlwaysFilteredPatterns:(id)arg2 ussdSometimesFilteredPatterns:(id)arg3 ;


@end


#endif