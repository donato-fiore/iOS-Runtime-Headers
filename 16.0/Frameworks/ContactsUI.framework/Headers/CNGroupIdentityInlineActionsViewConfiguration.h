// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGROUPIDENTITYINLINEACTIONSVIEWCONFIGURATION_H
#define CNGROUPIDENTITYINLINEACTIONSVIEWCONFIGURATION_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject

@property (readonly, nonatomic) NSInteger actionViewStyle; // ivar: _actionViewStyle
@property (readonly, nonatomic) NSDictionary *actionsPerType; // ivar: _actionsPerType
@property (readonly, nonatomic) BOOL displaysUnavailableActionTypes; // ivar: _displaysUnavailableActionTypes
@property (readonly, nonatomic) NSArray *supportedActionTypes; // ivar: _supportedActionTypes


-(id)initWithActions:(id)arg0 displaysUnavailableActionTypes:(BOOL)arg1 ;
-(id)initWithDefaultActionItems:(id)arg0 displaysUnavailableActionTypes:(BOOL)arg1 ;
-(id)initWithDefaultActionItems:(id)arg0 displaysUnavailableActionTypes:(BOOL)arg1 actionViewStyle:(NSInteger)arg2 ;


@end


#endif