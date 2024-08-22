// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHCONTROLLERQUEUEDNOTIFICATION_H
#define COMESHCONTROLLERQUEUEDNOTIFICATION_H

@class NSString;
@protocol COMeshControllerQueuedElementProtocol;

#import <Foundation/Foundation.h>

#import "COMeshNode.h"
#import "COMeshNotification.h"

@interface COMeshControllerQueuedNotification : NSObject <COMeshControllerQueuedElementProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) COMeshNode *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COMeshNotification *notification; // ivar: _notification
@property (readonly) Class superclass;


-(id)command;
-(id)initWithNotification:(id)arg0 destination:(id)arg1 ;
-(void)invokeCallbackWithError:(id)arg0 ;


@end


#endif