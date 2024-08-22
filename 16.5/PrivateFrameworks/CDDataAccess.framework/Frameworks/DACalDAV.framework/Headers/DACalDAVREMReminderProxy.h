// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACALDAVREMREMINDERPROXY_H
#define DACALDAVREMREMINDERPROXY_H

@class NSString, REMObjectID;
@protocol DACalDAViCalItemUpdatableBackingModel, DACalDAViCalItemBackingModel;

#import <Foundation/Foundation.h>


@interface DACalDAVREMReminderProxy : NSObject <DACalDAViCalItemUpdatableBackingModel, DACalDAViCalItemBackingModel>



@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // ivar: daCalendarItemUniqueIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *externalModificationTag; // ivar: externalModificationTag
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMObjectID *objectID; // ivar: objectID
@property (readonly) Class superclass;


-(id)initWithReminder:(id)arg0 ;
-(id)updatableBackingModel;
-(void)updatePropertiesWithReminder:(id)arg0 ;


@end


#endif