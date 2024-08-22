// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCEVENTTRACKERNOTIFICATIONMETADATA_H
#define NCEVENTTRACKERNOTIFICATIONMETADATA_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying>



@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *notificationIdentifier; // ivar: _notificationIdentifier


+(id)metadataForNotificationRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithNotificationIdentifier:(id)arg0 bundleIdentifier:(id)arg1 date:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif