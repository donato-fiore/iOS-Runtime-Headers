// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNNOTIFICATIONCONTACTSERVICERECORD_H
#define _UNNOTIFICATIONCONTACTSERVICERECORD_H

@class NSString, _UNNotificationContact;

#import <Foundation/Foundation.h>


@interface _UNNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) _UNNotificationContact *contact; // ivar: _contact


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif