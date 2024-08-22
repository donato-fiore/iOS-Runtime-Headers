// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTOFFICEHOURSREQUESTDELEGATE_H
#define DADCLIENTOFFICEHOURSREQUESTDELEGATE_H

@class NSString;
@protocol DAEventsOfficeHoursRequestResponseConsumer;


#import "DADClientDelegate.h"

@interface DADClientOfficeHoursRequestDelegate : DADClientDelegate <DAEventsOfficeHoursRequestResponseConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly) Class superclass;


-(void)_doRequestWithBlock:(id)arg0 ;
-(void)_finishedWithOfficeHours:(id)arg0 error:(id)arg1 canceled:(BOOL)arg2 ;
-(void)fetchOfficeHours;
-(void)finishWithError:(id)arg0 ;
-(void)officeHoursRequestWithID:(id)arg0 finishedWithError:(id)arg1 ;
-(void)officeHoursRequestWithID:(id)arg0 finishedWithOfficeHours:(id)arg1 error:(id)arg2 ;
-(void)setOfficeHours:(id)arg0 ;


@end


#endif