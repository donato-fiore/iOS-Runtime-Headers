// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOPAQUEPASSCODE_H
#define STOPAQUEPASSCODE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STOpaquePasscode : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *passcode; // ivar: _passcode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOpaquePasscode:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasscode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif