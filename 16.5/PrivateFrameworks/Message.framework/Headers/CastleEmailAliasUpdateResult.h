// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTLEEMAILALIASUPDATERESULT_H
#define CASTLEEMAILALIASUPDATERESULT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CastleEmailAliasUpdateResult : NSObject

@property (readonly, nonatomic) BOOL accountNeedsToUpdateProperties; // ivar: _accountNeedsToUpdateProperties
@property (readonly, nonatomic) NSString *defaultEmailAddress; // ivar: _defaultEmailAddress
@property (readonly, nonatomic) NSDictionary *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSString *entityTag; // ivar: _entityTag
@property (readonly, nonatomic) BOOL isSuccess; // ivar: _isSuccess
@property (readonly, nonatomic) BOOL notModified; // ivar: _notModified
@property (readonly, nonatomic) NSDictionary *receiveEmailAliasAddresses; // ivar: _receiveEmailAliasAddresses


-(id)init;
-(id)initWithReceiveEmailAliasAddresses:(id)arg0 emailAddresses:(id)arg1 defaultEmailAddress:(id)arg2 entityTag:(id)arg3 isSuccess:(BOOL)arg4 notModified:(BOOL)arg5 accountNeedsToUpdateProperties:(BOOL)arg6 ;


@end


#endif