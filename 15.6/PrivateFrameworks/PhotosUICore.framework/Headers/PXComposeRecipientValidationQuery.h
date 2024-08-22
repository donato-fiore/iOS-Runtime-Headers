// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOSERECIPIENTVALIDATIONQUERY_H
#define PXCOMPOSERECIPIENTVALIDATIONQUERY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXComposeRecipient.h"

@interface PXComposeRecipientValidationQuery : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSInteger addressKind; // ivar: _addressKind
@property (readonly, nonatomic) PXComposeRecipient *composeRecipient; // ivar: _composeRecipient
@property (nonatomic) NSInteger validationType; // ivar: _validationType


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithComposeRecipient:(id)arg0 address:(id)arg1 addressKind:(NSInteger)arg2 ;


@end


#endif