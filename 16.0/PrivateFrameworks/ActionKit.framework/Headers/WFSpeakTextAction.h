// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSPEAKTEXTACTION_H
#define WFSPEAKTEXTACTION_H

@class WFAction;
@protocol WFActionExtendedOperation;


#import "WFSpeakTextActionOperation.h"

@interface WFSpeakTextAction : WFAction {
    id<WFActionExtendedOperation> *_extendedOperation;
}


@property (retain, nonatomic) WFSpeakTextActionOperation *runningOperation; // ivar: _runningOperation


-(BOOL)isProgressIndeterminate;
-(id)extendedOperation;
-(id)voicePickerParameter;
-(void)cancel;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setExtendedOperation:(id)arg0 ;


@end


#endif