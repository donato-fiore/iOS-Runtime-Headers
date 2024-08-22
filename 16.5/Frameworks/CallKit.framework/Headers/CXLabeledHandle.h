// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXLABELEDHANDLE_H
#define CXLABELEDHANDLE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CXHandle.h"

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) CXHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 label:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif