// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USTRUSTIDENTIFIER_H
#define USTRUSTIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL trusted; // ivar: _trusted


+(BOOL)supportsSecureCoding;
+(id)identifierWithIdentifier:(id)arg0 trusted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 trusted:(BOOL)arg1 ;
-(void)_USTrustIdentifierCommonInitWithIdentifier:(id)arg0 trusted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif