// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEDATAPUSHDESTINATION_H
#define HMDHOMEDATAPUSHDESTINATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HMDUser.h"

@interface HMDHomeDataPushDestination : NSObject

@property (readonly, nonatomic) NSString *destination; // ivar: _destination
@property (nonatomic) BOOL ignoreConfigCompare; // ivar: _ignoreConfigCompare
@property (readonly, nonatomic) NSString *pushDestination;
@property (readonly, nonatomic) HMDUser *user; // ivar: _user
@property (readonly, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)initWithUser:(id)arg0 destination:(id)arg1 ;


@end


#endif