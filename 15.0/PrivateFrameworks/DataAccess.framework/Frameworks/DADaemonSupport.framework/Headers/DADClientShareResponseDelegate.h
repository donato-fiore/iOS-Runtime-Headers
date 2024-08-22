// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADCLIENTSHARERESPONSEDELEGATE_H
#define DADCLIENTSHARERESPONSEDELEGATE_H

@class NSString;
@protocol DAEventsCalendarSharingResponseConsumer;


#import "DADClientDelegate.h"

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer>



@property (retain, nonatomic) NSString *calendarID; // ivar: _calendarID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *shareID; // ivar: _shareID
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 client:(id)arg1 calendarID:(id)arg2 ;
-(void)_doResponseWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)reportAsJunk;
-(void)respondToShareRequestWithResponse:(NSInteger)arg0 ;
-(void)shareResponseFinishedWithError:(id)arg0 ;


@end


#endif