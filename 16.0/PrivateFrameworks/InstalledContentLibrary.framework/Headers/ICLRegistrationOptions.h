// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLREGISTRATIONOPTIONS_H
#define ICLREGISTRATIONOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICLRegistrationOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) unsigned int targetUID; // ivar: _targetUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetUID:(unsigned int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif