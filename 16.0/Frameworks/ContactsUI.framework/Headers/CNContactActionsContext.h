// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTACTIONSCONTEXT_H
#define CNCONTACTACTIONSCONTEXT_H

@class CNUIUserActionListDataSource;

#import <Foundation/Foundation.h>

#import "CNUIContactsEnvironment.h"

@interface CNContactActionsContext : NSObject

@property (readonly) CNUIUserActionListDataSource *dataSource; // ivar: _dataSource
@property (readonly) CNUIContactsEnvironment *environment; // ivar: _environment


-(id)description;
-(id)init;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 ;
-(void)setCacheEntryExpirationAge:(CGFloat)arg0 ;
-(void)setCacheEntryLimit:(NSUInteger)arg0 ;
-(void)setCacheEntryRefreshAge:(CGFloat)arg0 ;


@end


#endif