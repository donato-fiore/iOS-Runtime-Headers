// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSAFECHANGEHISTORYEVENTVISITORWRAPPER_H
#define CNSAFECHANGEHISTORYEVENTVISITORWRAPPER_H

@class NSString;
@protocol CNChangeHistoryEventVisitorPrivate, CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject <CNChangeHistoryEventVisitorPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNChangeHistoryEventVisitor> *visitor; // ivar: _visitor


-(id)initWithChangeHistoryEventVisitor:(id)arg0 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitAddGroupEvent:(id)arg0 ;
-(void)visitAddMemberToGroupEvent:(id)arg0 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDeleteGroupEvent:(id)arg0 ;
-(void)visitDifferentMeCardEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitLinkContactsEvent:(id)arg0 ;
-(void)visitPreferredContactForImageEvent:(id)arg0 ;
-(void)visitPreferredContactForNameEvent:(id)arg0 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg0 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg0 ;
-(void)visitUnlinkContactEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;
-(void)visitUpdateGroupEvent:(id)arg0 ;


@end


#endif