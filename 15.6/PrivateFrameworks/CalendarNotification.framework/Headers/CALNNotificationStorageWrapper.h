// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONSTORAGEWRAPPER_H
#define CALNNOTIFICATIONSTORAGEWRAPPER_H

@class NSString;
@protocol CALNNotificationStorage;

#import <Foundation/Foundation.h>


@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSObject<CALNNotificationStorage> *wrappedStorage; // ivar: _wrappedStorage


-(id)initWithWrappedStorage:(id)arg0 ;
-(id)notificationRecords;
-(void)addNotificationRecord:(id)arg0 ;
-(void)addNotificationRecords:(id)arg0 ;
-(void)removeAllNotificationRecords;
-(void)removeNotificationRecordsPassingTest:(id)arg0 ;


@end


#endif