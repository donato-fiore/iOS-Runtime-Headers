// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSNOTIFICATION_H
#define NSNOTIFICATION_H

@class NSDictionary;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSNotification : NSObject <NSCopying, NSCoding>



@property (readonly, copy) NSString *name;
@property (readonly, retain) id *object;
@property (readonly, copy) NSDictionary *userInfo;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)notificationWithName:(id)arg0 object:(id)arg1 ;
+(id)notificationWithName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif