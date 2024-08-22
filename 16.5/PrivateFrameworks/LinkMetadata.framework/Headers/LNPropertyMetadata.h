// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNPROPERTYMETADATA_H
#define LNPROPERTYMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"
#import "LNValueType.h"

@interface LNPropertyMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title
@property (readonly, copy, nonatomic) LNValueType *valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 valueType:(id)arg1 title:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif