// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDYNAMICPROVIDERCOLOR_H
#define UIDYNAMICPROVIDERCOLOR_H



#import "UIDynamicColor.h"

@interface UIDynamicProviderColor : UIDynamicColor {
    id *_provider;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProvider:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;


@end


#endif