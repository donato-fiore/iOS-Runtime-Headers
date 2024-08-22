// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWNOINPUTBEHAVIORASKFORINPUT_H
#define WFWORKFLOWNOINPUTBEHAVIORASKFORINPUT_H

@class NSString;
@protocol WFWorkflowNoInputBehavior;

#import <Foundation/Foundation.h>


@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior>



@property (readonly, nonatomic) BOOL allowMultipleSelection; // ivar: _allowMultipleSelection
@property (readonly, nonatomic) Class contentItemClass; // ivar: _contentItemClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)resolvesInput;
+(id)behaviorName;
-(id)initWithContentItemClass:(Class)arg0 allowMultipleSelection:(BOOL)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)serializedRepresentation;
-(void)resolveWithUserInterface:(id)arg0 runningDelegate:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif