// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSERVICERESOLUTIONINFO_H
#define MSSERVICERESOLUTIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSServiceAppInfo.h"
#import "MSUserAccountInfo.h"

@interface MSServiceResolutionInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MSServiceAppInfo *serviceAppInfo; // ivar: _serviceAppInfo
@property (readonly, nonatomic) MSUserAccountInfo *userAccountInfo; // ivar: _userAccountInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceAppInfo:(id)arg0 userAccountInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif