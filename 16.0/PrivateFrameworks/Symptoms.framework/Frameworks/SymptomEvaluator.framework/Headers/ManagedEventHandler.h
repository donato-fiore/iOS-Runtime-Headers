// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDEVENTHANDLER_H
#define MANAGEDEVENTHANDLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ManagedEventHandler : NSObject {
    char * _notifyString;
    int _NotifyToken;
    char * _transportMessageString;
    NSMutableArray *_managedEvents;
}




+(id)getHandlerByName:(id)arg0 ;
+(void)initialize;
-(id)description;
-(id)feedbackForEventId:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)didReceiveSyndrome:(id)arg0 ;
-(void)populateReply:(id)arg0 ForId:(NSUInteger)arg1 Count:(NSUInteger)arg2 ;
-(void)sendNotificationWithId:(NSUInteger)arg0 ;


@end


#endif