// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTSTOREDLOCATIONENUMERATIONCONTEXT_H
#define RTSTOREDLOCATIONENUMERATIONCONTEXT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RTStoredLocationEnumerationOptions.h"

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnumerationOptions:(id)arg0 ;
-(id)initWithEnumerationOptions:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif