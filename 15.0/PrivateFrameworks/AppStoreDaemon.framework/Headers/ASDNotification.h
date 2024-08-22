// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDNOTIFICATION_H
#define ASDNOTIFICATION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDNotification : NSObject <NSSecureCoding>



@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)notificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif