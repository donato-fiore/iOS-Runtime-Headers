// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPEXTENSIONENUMERATIONSETTINGS_H
#define FPEXTENSIONENUMERATIONSETTINGS_H



#import "FPEnumerationSettings.h"
#import "FPItemID.h"

@interface FPExtensionEnumerationSettings : FPEnumerationSettings

@property (copy, nonatomic) FPItemID *enumeratedItemID; // ivar: _enumeratedItemID
@property (nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration; // ivar: _presenterEnumeration
@property (nonatomic) BOOL wantsDirectExtensionEnumeration; // ivar: _wantsDirectExtensionEnumeration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif