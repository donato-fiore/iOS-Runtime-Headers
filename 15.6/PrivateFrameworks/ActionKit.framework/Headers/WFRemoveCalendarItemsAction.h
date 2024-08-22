// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOVECALENDARITEMSACTION_H
#define WFREMOVECALENDARITEMSACTION_H

@class WFAction;



@interface WFRemoveCalendarItemsAction : WFAction



-(Class)contentItemClass;
-(NSUInteger)entityType;
-(id)accessResource;
-(void)deleteItems:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif