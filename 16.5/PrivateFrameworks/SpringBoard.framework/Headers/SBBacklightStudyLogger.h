// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBACKLIGHTSTUDYLOGGER_H
#define SBBACKLIGHTSTUDYLOGGER_H

@class SLGLog, NSString;
@protocol SBBacklightControllerObserver;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"

@interface SBBacklightStudyLogger : NSObject <SBBacklightControllerObserver>

 {
    SLGLog *_logger;
    SBBacklightController *_controller;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(void)backlightController:(id)arg0 didAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif