// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONSEARCHGROUP_H
#define WFACTIONSEARCHGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFActionSearchGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName


-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 actions:(id)arg2 ;


@end


#endif