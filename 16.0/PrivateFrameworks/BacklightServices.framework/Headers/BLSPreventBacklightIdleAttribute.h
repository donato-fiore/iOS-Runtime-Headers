// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSPREVENTBACKLIGHTIDLEATTRIBUTE_H
#define BLSPREVENTBACKLIGHTIDLEATTRIBUTE_H

@class NSString;
@protocol BSXPCCoding;


#import "BLSAttribute.h"

@interface BLSPreventBacklightIdleAttribute : BLSAttribute <BSXPCCoding>



@property (readonly, nonatomic) BOOL clearUserInteraction; // ivar: _clearUserInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL restartTimerOnInvalidation; // ivar: _restartTimerOnInvalidation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)preventIdle;
+(id)preventIdleAndRestartTimerOnInvalidation;
+(id)preventIdleClearUserInteractionAndRestartTimerOnInvalidation;
-(BOOL)checkEntitlementSourceForRequiredEntitlements:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestartTimerOnInvalidation:(BOOL)arg0 clearUserInteraction:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif