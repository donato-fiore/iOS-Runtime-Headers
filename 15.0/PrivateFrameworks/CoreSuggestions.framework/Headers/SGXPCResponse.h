// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGXPCRESPONSE_H
#define SGXPCRESPONSE_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGXPCResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
+(id)response;
+(id)responseWithError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif