// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWUICORE27PROGRESSKEYVALUEOBSERVATION_H
#define _TTC14WORKFLOWUICORE27PROGRESSKEYVALUEOBSERVATION_H


#import <Foundation/Foundation.h>


@interface _TtC14WorkflowUICore27ProgressKeyValueObservation : NSObject {
    ? progress;
    ? key;
    ? keyPath;
    ? changeHandler;
    ? observing;
}




-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif