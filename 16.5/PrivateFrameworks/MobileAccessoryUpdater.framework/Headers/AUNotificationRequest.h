// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUNOTIFICATIONREQUEST_H
#define AUNOTIFICATIONREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AUNotificationRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initUnplugReplugNotificationWithAccessoryName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif