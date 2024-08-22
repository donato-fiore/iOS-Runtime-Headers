// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOVECALENDARITEMSACTION_H
#define WFREMOVECALENDARITEMSACTION_H

@class WFAction;



@interface WFRemoveCalendarItemsAction : WFAction

@property (nonatomic) NSUInteger currentConfirmation; // ivar: _currentConfirmation
@property (nonatomic) NSUInteger requiredConfirmations; // ivar: _requiredConfirmations


-(Class)contentItemClass;
-(NSUInteger)entityType;
-(id)accessResource;
-(void)deleteItems:(id)arg0 ;
-(void)presentConfirmationToDeleteItems:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif