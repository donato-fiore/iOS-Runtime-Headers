// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGEICON_H
#define PKAPPLICATIONMESSAGEICON_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKImageDescriptor.h"

@interface PKApplicationMessageIcon : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKImageDescriptor *image; // ivar: _image
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(id)createWithImage:(id)arg0 style:(NSInteger)arg1 ;
+(struct CGSize )maximumSizeForStyle:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif