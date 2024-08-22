// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALENTITLEMENT_H
#define PKAPPLETSUBCREDENTIALENTITLEMENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *descriptionKey; // ivar: _descriptionKey
@property (copy, nonatomic) NSString *longDescriptionKey; // ivar: _longDescriptionKey
@property (nonatomic, getter=isNativelySupported) BOOL nativelySupported; // ivar: _nativelySupported
@property (readonly, nonatomic) NSInteger type;
@property (nonatomic) NSUInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultDescription;
-(id)defaultLongDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)localizedDescriptionWithPass:(id)arg0 ;
-(id)localizedLongDescriptionWithPass:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif