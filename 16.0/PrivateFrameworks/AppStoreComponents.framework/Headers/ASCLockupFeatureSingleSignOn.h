// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCLOCKUPFEATURESINGLESIGNON_H
#define ASCLOCKUPFEATURESINGLESIGNON_H

@class NSString;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>


@interface ASCLockupFeatureSingleSignOn : NSObject <ASCLockupFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresSSOEntitlement; // ivar: _requiresSSOEntitlement
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequiresSSOEntitlement:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif