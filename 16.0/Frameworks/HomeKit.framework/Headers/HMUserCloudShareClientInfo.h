// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMUSERCLOUDSHARECLIENTINFO_H
#define HMUSERCLOUDSHARECLIENTINFO_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMUserCloudShareClientInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *accountAuthToken; // ivar: _accountAuthToken


+(BOOL)supportsSecureCoding;
-(id)initWithAccountAuthToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif