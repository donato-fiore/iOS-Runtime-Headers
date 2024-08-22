// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVAPPIDENTITYDIGEST_H
#define PVAPPIDENTITYDIGEST_H

@class NSNumber, NSData, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PVAppIdentityDigest : NSObject <NSSecureCoding>

 {
    NSNumber *version;
    NSData *data1;
    NSData *data2;
    NSData *data3;
    NSData *data4;
    NSData *data5;
    NSError *error;
}




+(BOOL)supportsSecureCoding;
+(id)digestWithErrorCode:(NSInteger)arg0 ;
+(id)digestWithTimeoutError;
-(id)asDictionary;
-(id)getError;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 version:(id)arg1 ;
-(id)initWithVersion:(id)arg0 data1:(id)arg1 data2:(id)arg2 data3:(id)arg3 data4:(id)arg4 data5:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif