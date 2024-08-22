// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHCONTROLLERQUEUEDCOMMAND_H
#define COMESHCONTROLLERQUEUEDCOMMAND_H

@class NSString;
@protocol COMeshControllerQueuedElementProtocol;

#import <Foundation/Foundation.h>

#import "COMeshCommand.h"
#import "COMeshNode.h"

@interface COMeshControllerQueuedCommand : NSObject <COMeshControllerQueuedElementProtocol>



@property (readonly, copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) COMeshCommand *command; // ivar: _command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) COMeshNode *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCommand:(id)arg0 sentCallback:(id)arg1 ;
-(void)invokeCallbackWithError:(id)arg0 ;


@end


#endif