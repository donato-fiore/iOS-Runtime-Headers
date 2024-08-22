// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDISTRIBUTEDSITEIDENTIFIER_H
#define CKDISTRIBUTEDSITEIDENTIFIER_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDistributedSiteIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *modifier; // ivar: _modifier


+(BOOL)supportsSecureCoding;
+(id)SHADescription:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 modifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif