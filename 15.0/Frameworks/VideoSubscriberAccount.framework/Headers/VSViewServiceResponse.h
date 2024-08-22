// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSVIEWSERVICERESPONSE_H
#define VSVIEWSERVICERESPONSE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountMetadata.h"

@interface VSViewServiceResponse : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) VSAccountMetadata *accountMetadata; // ivar: _accountMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif