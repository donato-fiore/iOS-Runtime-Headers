// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENTITY_H
#define LNENTITY_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNEntityIdentifier.h"

@interface LNEntity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNEntityIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *managedAccountIdentifier; // ivar: _managedAccountIdentifier
@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // ivar: _transient


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 managedAccountIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 properties:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 properties:(id)arg1 managedAccountIdentifier:(id)arg2 ;
-(id)initWithTransient:(BOOL)arg0 identifier:(id)arg1 properties:(id)arg2 managedAccountIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif