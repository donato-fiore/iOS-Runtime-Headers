// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNFOCUSCONFIGURATIONAPPCONTEXT_H
#define LNFOCUSCONFIGURATIONAPPCONTEXT_H

@class NSPredicate, NSString;
@protocol NSSecureCoding, NSCopying;


#import "LNActionAppContext.h"

@interface LNFocusConfigurationAppContext : LNActionAppContext <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSPredicate *notificationFilterPredicate; // ivar: _notificationFilterPredicate
@property (readonly, copy, nonatomic) NSString *targetContentIdentifierPrefix; // ivar: _targetContentIdentifierPrefix


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationFilterPredicate:(id)arg0 targetContentIdentifierPrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif