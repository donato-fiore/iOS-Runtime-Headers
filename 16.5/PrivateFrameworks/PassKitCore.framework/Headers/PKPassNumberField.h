// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSNUMBERFIELD_H
#define PKPASSNUMBERFIELD_H

@class NSString;


#import "PKPassField.h"

@interface PKPassNumberField : PKPassField

@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSInteger numberStyle; // ivar: _numberStyle


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)asMutableDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)value;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif