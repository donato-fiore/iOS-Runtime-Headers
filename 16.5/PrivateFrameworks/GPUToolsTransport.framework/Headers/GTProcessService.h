// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTPROCESSSERVICE_H
#define GTPROCESSSERVICE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GTProcessInfo.h"
#import "GTServiceProperties.h"

@interface GTProcessService : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GTProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, nonatomic) GTServiceProperties *serviceProperties; // ivar: _serviceProperties


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithService:(id)arg0 processInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif