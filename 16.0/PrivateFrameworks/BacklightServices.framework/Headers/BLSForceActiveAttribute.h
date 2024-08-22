// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSFORCEACTIVEATTRIBUTE_H
#define BLSFORCEACTIVEATTRIBUTE_H

@class NSString;
@protocol BSXPCCoding;


#import "BLSAttribute.h"

@interface BLSForceActiveAttribute : BLSAttribute <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
+(id)forceActive;
+(id)forceActiveUserInitiated:(BOOL)arg0 ;
-(BOOL)checkEntitlementSourceForRequiredEntitlements:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserInitiated:(BOOL)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif