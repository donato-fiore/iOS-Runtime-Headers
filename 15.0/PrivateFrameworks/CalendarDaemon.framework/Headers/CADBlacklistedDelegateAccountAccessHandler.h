// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADBLACKLISTEDDELEGATEACCOUNTACCESSHANDLER_H
#define CADBLACKLISTEDDELEGATEACCOUNTACCESSHANDLER_H

@class NSSet;
@protocol CADAccountAccessHandler, OS_dispatch_queue, CADCalCalendarInfoProvider, CADCalStoreInfoProvider;

#import <Foundation/Foundation.h>


@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (retain, nonatomic) NSSet *cachedDelegateCalStoreInfos; // ivar: _cachedDelegateCalStoreInfos
@property (readonly, nonatomic) NSObject<CADCalCalendarInfoProvider> *calCalendarInfoProvider; // ivar: _calCalendarInfoProvider
@property (readonly, nonatomic) NSObject<CADCalStoreInfoProvider> *calStoreInfoProvider; // ivar: _calStoreInfoProvider


-(BOOL)isAccountManaged:(id)arg0 ;
-(BOOL)isActionAllowed:(NSUInteger)arg0 forAccountIdentifier:(id)arg1 ;
-(id)_delegateCalStoreInfos;
-(id)initWithCalStoreInfoProvider:(id)arg0 calendarInfoProvider:(id)arg1 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif