// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADREMSHARERESPONSEDELEGATE_H
#define DADREMSHARERESPONSEDELEGATE_H

@class NSString;
@protocol DAEventsCalendarSharingResponseConsumer;


#import "DADREMXPCPerformerDelegate.h"

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate <DAEventsCalendarSharingResponseConsumer>



@property (retain, nonatomic) NSString *calendarID; // ivar: _calendarID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *shareID; // ivar: _shareID
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 calendarID:(id)arg1 ;
-(void)_doResponseWithBlock:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)reportAsJunk;
-(void)respondToShareRequestWithResponse:(NSInteger)arg0 ;
-(void)shareResponseFinishedWithError:(id)arg0 ;


@end


#endif