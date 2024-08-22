// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TULABELEDHANDLE_H
#define TULABELEDHANDLE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isSuggested; // ivar: _isSuggested
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 label:(id)arg1 isSuggested:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif