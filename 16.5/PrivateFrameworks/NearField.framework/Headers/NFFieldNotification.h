// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFFIELDNOTIFICATION_H
#define NFFIELDNOTIFICATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFFieldNotification : NSObject <NSSecureCoding>



@property (readonly) NSUInteger notificationType; // ivar: _notificationType
@property (readonly) unsigned int rfTechnology; // ivar: _rfTechnology
@property (readonly) unsigned short typeFSystemCode; // ivar: _typeFSystemCode


+(BOOL)supportsSecureCoding;
+(id)notificationWithDictionary:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif