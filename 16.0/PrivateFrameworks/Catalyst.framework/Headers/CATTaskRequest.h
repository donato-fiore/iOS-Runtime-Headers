// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATTASKREQUEST_H
#define CATTASKREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CATTaskRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL handlesNotifications; // ivar: _handlesNotifications


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif