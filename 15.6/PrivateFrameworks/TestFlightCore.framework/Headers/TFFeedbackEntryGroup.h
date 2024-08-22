// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFFEEDBACKENTRYGROUP_H
#define TFFEEDBACKENTRYGROUP_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "TFFeedbackEntry.h"

@interface TFFeedbackEntryGroup : NSObject

@property (readonly, nonatomic) NSUInteger election; // ivar: _election
@property (readonly, copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly, copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly, copy, nonatomic) NSDictionary *footerTextLinkMap; // ivar: _footerTextLinkMap
@property (readonly, nonatomic) TFFeedbackEntry *groupToggleEntry; // ivar: _groupToggleEntry
@property (readonly, copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (readonly, copy, nonatomic) NSDictionary *headerTextLinkMap; // ivar: _headerTextLinkMap
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic, getter=isToggleable) BOOL toggleable; // ivar: _toggleable


-(NSUInteger)numberOfVisibleItemsForIncludeState:(BOOL)arg0 ;
-(id)initWithIdentifier:(id)arg0 entries:(id)arg1 title:(id)arg2 election:(NSUInteger)arg3 headerText:(id)arg4 headerTextLinkMap:(id)arg5 footerText:(id)arg6 footerTextLinkMap:(id)arg7 ;
-(id)visibleEntryForIndex:(NSUInteger)arg0 ;


@end


#endif