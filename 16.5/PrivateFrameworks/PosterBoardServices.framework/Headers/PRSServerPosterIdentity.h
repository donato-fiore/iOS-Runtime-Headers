// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSSERVERPOSTERIDENTITY_H
#define PRSSERVERPOSTERIDENTITY_H

@class NSString, NSUUID;
@protocol BSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRSServerPosterIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier; // ivar: _descriptorIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *posterUUID; // ivar: _posterUUID
@property (readonly, copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supplement; // ivar: _supplement
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)configurationIdentityWithProvider:(id)arg0 posterUUID:(id)arg1 version:(NSUInteger)arg2 supplement:(NSUInteger)arg3 ;
+(id)descriptorIdentityWithProvider:(id)arg0 identifier:(id)arg1 posterUUID:(id)arg2 version:(NSUInteger)arg3 ;
+(id)staticDescriptorIdentityWithProvider:(id)arg0 identifier:(id)arg1 posterUUID:(id)arg2 version:(NSUInteger)arg3 ;
+(void)_setDisableUniquing:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNewerVersionOfIdentity:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif