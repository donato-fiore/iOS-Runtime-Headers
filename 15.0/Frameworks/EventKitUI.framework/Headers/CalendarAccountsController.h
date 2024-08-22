// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALENDARACCOUNTSCONTROLLER_H
#define CALENDARACCOUNTSCONTROLLER_H

@class NSMutableDictionary, ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalendarAccountsController : NSObject {
    NSMutableDictionary *_lastStoreListingRefreshDates;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    ACAccountStore *_accountStore;
}




+(id)sharedInstance;
+(void)initialize;
+(void)invalidate;
-(BOOL)sourceIsManaged:(id)arg0 ;
-(id)_accountForAccountIdentifier:(id)arg0 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg0 ;
-(id)accountStore;
-(id)accountTypeTitleForSource:(id)arg0 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg0 ;
-(id)init;
-(id)titleForSource:(id)arg0 forBeginningOfSentence:(BOOL)arg1 ;
-(int)sortOrderForSource:(id)arg0 ;
-(int)sortOrderForSourceType:(NSInteger)arg0 ;
-(int)sortOrderForStoreType:(NSInteger)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif