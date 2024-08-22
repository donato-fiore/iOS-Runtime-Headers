// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCUSTOMACTIVITYPROXY_H
#define SFCUSTOMACTIVITYPROXY_H

@class UIImage, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) UIImage *activityImage; // ivar: _activityImage
@property (readonly, nonatomic) NSUInteger activityProxyID; // ivar: _activityProxyID
@property (readonly, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithActivityType:(id)arg0 title:(id)arg1 image:(id)arg2 proxyID:(NSUInteger)arg3 ;
-(id)activityTypeWithActivity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif