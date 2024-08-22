// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXASSISTANTCONTROLLERDELEGATE_H
#define _PXASSISTANTCONTROLLERDELEGATE_H

@class NSString;
@protocol PXAssistantControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXAssistantController.h"

@interface _PXAssistantControllerDelegate : NSObject <PXAssistantControllerDelegate>

 {
    PXAssistantController *_assistantController;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAssistantController:(id)arg0 completionHandler:(id)arg1 ;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;


@end


#endif