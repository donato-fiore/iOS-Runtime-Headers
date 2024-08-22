// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSREMOTEALERTCONFIGURATIONCONTEXT_H
#define SBSREMOTEALERTCONFIGURATIONCONTEXT_H

@class NSSet, NSString, NSDictionary;
@protocol BSXPCCoding, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding>



@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *legacyAlertOptions; // ivar: _legacyAlertOptions
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // ivar: _xpcEndpoint


+(BOOL)supportsSecureCoding;
+(id)configurationContextWithLegacyAlertOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif