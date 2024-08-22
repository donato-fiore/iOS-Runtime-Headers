// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOAUTHSCOPESET_H
#define HKOAUTHSCOPESET_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HKOAuthScopeSet : NSObject

@property (readonly, nonatomic) BOOL canReadAllResourceTypes; // ivar: _canReadAllResourceTypes
@property (readonly, nonatomic) BOOL canWriteAllResourceTypes; // ivar: _canWriteAllResourceTypes
@property (readonly, nonatomic) BOOL hasAtLeastOneResourceTypeScope; // ivar: _hasAtLeastOneResourceTypeScope
@property (readonly, nonatomic) BOOL hasClinicalSharingScopes;
@property (readonly, copy, nonatomic) NSSet *originalScopes; // ivar: _originalScopes
@property (readonly, copy, nonatomic) NSSet *readableResourceTypes; // ivar: _readableResourceTypes
@property (readonly, copy, nonatomic) NSSet *writableResourceTypes; // ivar: _writableResourceTypes


+(id)scopeSetWithScopes:(id)arg0 ;
-(BOOL)canReadResourceType:(id)arg0 ;
-(BOOL)canWriteResourceType:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOriginalScopes:(id)arg0 readableResourceTypes:(id)arg1 writableResourceTypes:(id)arg2 canReadAllResourceTypes:(BOOL)arg3 canWriteAllResourceTypes:(BOOL)arg4 hasAtLeastOneResourceTypeScope:(BOOL)arg5 ;


@end


#endif