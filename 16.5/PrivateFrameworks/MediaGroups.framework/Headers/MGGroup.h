// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGGROUP_H
#define MGGROUP_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MGGroupIdentifier.h"
#import "MGClientService.h"

@interface MGGroup : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MGGroupIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *memberIdentifiers; // ivar: _memberIdentifiers
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) MGClientService *service; // ivar: _service
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)predicateForCurrentDevice;
+(id)predicateForGroup:(id)arg0 ;
+(id)predicateForGroupIdentifier:(id)arg0 ;
+(id)predicateForGroupsContainingGroup:(id)arg0 ;
+(id)predicateForType;
+(void)groupWithClientService:(id)arg0 name:(id)arg1 members:(id)arg2 completion:(id)arg3 ;
+(void)groupWithConnectionProvider:(id)arg0 name:(id)arg1 members:(id)arg2 completion:(id)arg3 ;
+(void)groupWithName:(id)arg0 members:(id)arg1 completion:(id)arg2 ;
-(BOOL)isSameGroup:(id)arg0 ;
-(id)description;
-(id)initWithClientService:(id)arg0 type:(id)arg1 identifier:(id)arg2 name:(id)arg3 memberIdentifiers:(id)arg4 ;
-(id)initWithClientService:(id)arg0 type:(id)arg1 identifier:(id)arg2 name:(id)arg3 properties:(id)arg4 memberIdentifiers:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConnectionProvider:(id)arg0 type:(id)arg1 identifier:(id)arg2 name:(id)arg3 memberIdentifiers:(id)arg4 ;
-(id)initWithConnectionProvider:(id)arg0 type:(id)arg1 identifier:(id)arg2 name:(id)arg3 properties:(id)arg4 memberIdentifiers:(id)arg5 ;
-(void)deleteWithClientService:(id)arg0 completion:(id)arg1 ;
-(void)deleteWithCompletion:(id)arg0 ;
-(void)deleteWithConnectionProvider:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceSetClientService:(id)arg0 ;
-(void)membersWithCompletion:(id)arg0 ;


@end


#endif