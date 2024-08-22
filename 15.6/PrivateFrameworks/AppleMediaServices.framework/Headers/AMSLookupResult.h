// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSLOOKUPRESULT_H
#define AMSLOOKUPRESULT_H

@class NSDictionary, NSArray, NSDate;


#import "AMSURLResult.h"

@interface AMSLookupResult : AMSURLResult {
    NSDictionary *_response;
}


@property (readonly, nonatomic) NSArray *allItems;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)appStoreURLWithReason:(NSInteger)arg0 initialIndex:(NSInteger)arg1 ;
-(id)initWithResult:(id)arg0 dictionary:(id)arg1 ;
-(id)itemForKey:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_enumerateItemsWithBlock:(id)arg0 ;


@end


#endif