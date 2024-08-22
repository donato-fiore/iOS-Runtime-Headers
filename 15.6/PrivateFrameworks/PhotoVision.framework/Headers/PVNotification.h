// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVNOTIFICATION_H
#define PVNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PVNotification : NSObject

@property (readonly, nonatomic) id *details; // ivar: _details
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)notificationWithName:(id)arg0 ;
+(id)notificationWithName:(id)arg0 details:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 details:(id)arg1 ;


@end


#endif