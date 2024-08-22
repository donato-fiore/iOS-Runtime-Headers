// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDREQUESTRESPONSE_H
#define ASDREQUESTRESPONSE_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSError *error; // ivar: _error
@property BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif