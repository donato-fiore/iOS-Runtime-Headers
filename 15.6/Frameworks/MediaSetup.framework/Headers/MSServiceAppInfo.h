// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSERVICEAPPINFO_H
#define MSSERVICEAPPINFO_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSServiceAppInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *alternateBundleIDS; // ivar: _alternateBundleIDS
@property (readonly, copy, nonatomic) NSString *serviceBundleID; // ivar: _serviceBundleID
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 serviceBundleID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif