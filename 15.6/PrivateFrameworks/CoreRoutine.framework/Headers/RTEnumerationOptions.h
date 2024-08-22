// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTENUMERATIONOPTIONS_H
#define RTENUMERATIONOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTEnumerationOptions : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)enumeratedType;
-(NSUInteger)batchSize;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)processingBlock:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif