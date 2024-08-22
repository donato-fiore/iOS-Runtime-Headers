// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBANNERSERVICEREQUEST_H
#define PKBANNERSERVICEREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBannerServiceRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif