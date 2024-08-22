// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV14WORKFLOWEDITOR18LOCATIONPICKERVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITOR18LOCATIONPICKERVIEW11COORDINATOR_H

@protocol WFLocationPickerViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditor18LocationPickerView11Coordinator : NSObject <WFLocationPickerViewControllerDelegate>

 {
    ? parent;
}




-(id)init;
-(void)locationPicker:(id)arg0 didFinishWithValue:(id)arg1 ;
-(void)locationPickerDidCancel:(id)arg0 ;


@end


#endif