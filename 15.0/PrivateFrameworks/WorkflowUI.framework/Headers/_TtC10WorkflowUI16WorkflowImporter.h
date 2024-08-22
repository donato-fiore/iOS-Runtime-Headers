// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10WORKFLOWUI16WORKFLOWIMPORTER_H
#define _TTC10WORKFLOWUI16WORKFLOWIMPORTER_H


#import <Foundation/Foundation.h>


@interface _TtC10WorkflowUI16WorkflowImporter : NSObject {
    ? userInterface;
}




-(id)init;
-(id)initWithPresenter:(id)arg0 ;
-(id)initWithUserInterface:(id)arg0 ;
-(void)importWorkflow:(id)arg0 shortcutSource:(int)arg1 galleryIdentifier:(id)arg2 trigger:(id)arg3 triggerSource:(int)arg4 provideSkipOption:(BOOL)arg5 authorizeAccessResources:(BOOL)arg6 completion:(id)arg7 ;


@end


#endif