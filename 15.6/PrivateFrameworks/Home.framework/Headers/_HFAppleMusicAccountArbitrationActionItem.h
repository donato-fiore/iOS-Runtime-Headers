// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFAPPLEMUSICACCOUNTARBITRATIONACTIONITEM_H
#define _HFAPPLEMUSICACCOUNTARBITRATIONACTIONITEM_H

@class NSSet, NSString, NAFuture, NSDictionary;

#import <Foundation/Foundation.h>


@interface _HFAppleMusicAccountArbitrationActionItem : NSObject

@property (copy, nonatomic) NSSet *accessories; // ivar: _accessories
@property (retain, nonatomic) NSString *actionItemDescription; // ivar: _actionItemDescription
@property (retain, nonatomic) NAFuture *future; // ivar: _future
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)loginActionItemForAccessories:(id)arg0 account:(id)arg1 contextGenerator:(id)arg2 ;
+(id)logoutActionItemForAccessories:(id)arg0 desiredAccount:(id)arg1 ;
-(id)description;


@end


#endif