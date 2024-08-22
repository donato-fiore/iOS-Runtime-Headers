// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXAUDITTOKEN_H
#define EXAUDITTOKEN_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface EXAuditToken : NSObject <NSSecureCoding, NSCopying>



@property (readonly) ? auditToken; // ivar: _auditToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif