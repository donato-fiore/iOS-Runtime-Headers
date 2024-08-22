// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMODALPRESENTATIONVIEWCONTROLLER_H
#define CSMODALPRESENTATIONVIEWCONTROLLER_H

@protocol BSInvalidatable;


#import "CSPresentationViewController.h"

@interface CSModalPresentationViewController : CSPresentationViewController {
    id<BSInvalidatable> *_stateCaptureBlock;
}




-(id)init;
-(void)_addStateCaptureHandlers;
-(void)dealloc;


@end


#endif