// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMACCOUNTGROUPCONTEXT_H
#define REMACCOUNTGROUPCONTEXT_H


#import <Foundation/Foundation.h>

#import "REMAccount.h"

@interface REMAccountGroupContext : NSObject

@property (retain, nonatomic) REMAccount *account; // ivar: _account


-(id)fetchGroupsWithError:(*id)arg0 ;
-(id)initWithAccount:(id)arg0 ;


@end


#endif