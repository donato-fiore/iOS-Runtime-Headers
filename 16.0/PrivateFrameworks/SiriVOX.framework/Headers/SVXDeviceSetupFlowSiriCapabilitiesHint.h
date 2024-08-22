// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDEVICESETUPFLOWSIRICAPABILITIESHINT_H
#define SVXDEVICESETUPFLOWSIRICAPABILITIESHINT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXDeviceSetupFlowSiriCapabilitiesHint : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif