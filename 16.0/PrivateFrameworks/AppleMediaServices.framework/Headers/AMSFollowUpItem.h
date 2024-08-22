// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFOLLOWUPITEM_H
#define AMSFOLLOWUPITEM_H

@class ACAccount, NSArray, NSString, NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMetricsEvent.h"

@interface AMSFollowUpItem : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSString *backingIdentifier;
@property (retain, nonatomic) NSString *bundleIconName; // ivar: _bundleIconName
@property (nonatomic) BOOL disableGrouping; // ivar: _disableGrouping
@property (nonatomic) NSInteger displayStyle; // ivar: _displayStyle
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (nonatomic, getter=isHardwareOffer) BOOL hardwareOffer; // ivar: _hardwareOffer
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL shouldPostNotification; // ivar: _shouldPostNotification
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


+(id)backingIdentifierForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)componentsFromBackingIdentifier:(id)arg0 ;
-(BOOL)shouldOverwriteItem:(id)arg0 ;
-(id)generateItem;
-(id)initWithFollowUpItem:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 account:(id)arg1 priority:(NSInteger)arg2 ;
-(id)postMetricsWithBag:(id)arg0 ;
-(id)postMetricsWithBagContract:(id)arg0 ;


@end


#endif