// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMACCOUNTTYPEHOST_H
#define REMACCOUNTTYPEHOST_H


#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) REMObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isCalDav;
-(BOOL)isCloudBased;
-(BOOL)isCloudKit;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExchange;
-(BOOL)isLocal;
-(BOOL)isLocalInternal;
-(BOOL)isNonPrimaryCloudKit;
-(BOOL)isPrimaryCloudKit;
-(BOOL)isValid;
-(NSInteger)_accountType;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(NSInteger)arg0 ;
-(id)internalDescription;


@end


#endif