// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWNOINPUTBEHAVIORGETCLIPBOARD_H
#define WFWORKFLOWNOINPUTBEHAVIORGETCLIPBOARD_H

@class NSString;
@protocol WFWorkflowNoInputBehavior;

#import <Foundation/Foundation.h>


@interface WFWorkflowNoInputBehaviorGetClipboard : NSObject <WFWorkflowNoInputBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)resolvesInput;
+(id)behaviorName;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)serializedRepresentation;
-(void)resolveWithUserInterface:(id)arg0 runningDelegate:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif