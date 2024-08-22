// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNQUERYSORTINGOPTIONMETADATA_H
#define LNQUERYSORTINGOPTIONMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"

@interface LNQuerySortingOptionMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *entityType; // ivar: _entityType
@property (readonly, copy, nonatomic) NSString *propertyIdentifier; // ivar: _propertyIdentifier
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyIdentifier:(id)arg0 entityType:(id)arg1 ;
-(id)initWithTitle:(id)arg0 propertyIdentifier:(id)arg1 entityType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif