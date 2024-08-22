// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCONTAINERMULTIGETTASK_H
#define CALDAVCONTAINERMULTIGETTASK_H

@class CoreDAVContainerMultiGetTask;



@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask

@property (nonatomic) BOOL getScheduleChanges; // ivar: _getScheduleChanges
@property (nonatomic) BOOL getScheduleTags; // ivar: _getScheduleTags


-(id)copyAdditionalPropElements;
-(id)initWithURLs:(id)arg0 atContainerURL:(id)arg1 getScheduleTags:(BOOL)arg2 getScheduleChanges:(BOOL)arg3 ;
-(id)initWithURLs:(id)arg0 atContainerURL:(id)arg1 getScheduleTags:(BOOL)arg2 getScheduleChanges:(BOOL)arg3 appSpecificCalendarItemClass:(Class)arg4 ;
-(void)setAdditionalProperties:(id)arg0 onDataItem:(id)arg1 ;


@end


#endif