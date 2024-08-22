// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCONTACTSTORECHANGEHISTORYEVENTSHANDLER_H
#define IMCONTACTSTORECHANGEHISTORYEVENTSHANDLER_H

@class NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)postNotificationForCNContact:(id)arg0 eventType:(NSUInteger)arg1 handleIDsToProcess:(id)arg2 ;
-(void)processChangeEventForContact:(id)arg0 contactFromCache:(id)arg1 eventType:(NSUInteger)arg2 handleID:(id)arg3 ;
-(void)processContactChangeEventForContact:(id)arg0 ofEventType:(NSUInteger)arg1 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif