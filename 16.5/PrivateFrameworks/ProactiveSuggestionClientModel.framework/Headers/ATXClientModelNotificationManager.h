// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCLIENTMODELNOTIFICATIONMANAGER_H
#define ATXCLIENTMODELNOTIFICATIONMANAGER_H

@class NSString;
@protocol ATXClientModelNotificationManagerProtocol;

#import <Foundation/Foundation.h>


@interface ATXClientModelNotificationManager : NSObject <ATXClientModelNotificationManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)notificationHandleForClientModel:(id)arg0 ;
-(void)updateNotificationId:(id)arg0 clientModel:(id)arg1 ;


@end


#endif