// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONDRAWERSECTION_H
#define WFACTIONDRAWERSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFActionDrawerSection : NSObject

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSArray *donations; // ivar: _donations
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType


-(id)initAsLoading;
-(id)initWithLocalizedTitle:(id)arg0 actions:(id)arg1 donations:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(NSInteger)arg4 ;


@end


#endif