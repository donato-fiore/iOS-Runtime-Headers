// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMUDOWNLOADWAITINGALERTCONTROLLER_H
#define NMUDOWNLOADWAITINGALERTCONTROLLER_H

@class MPModelObject, UIViewController;

#import <Foundation/Foundation.h>


@interface NMUDownloadWaitingAlertController : NSObject {
    MPModelObject *_modelObject;
    NSUInteger _status;
    NSUInteger _downloadPauseReason;
    UIViewController *_presentingViewController;
}




+(id)requiredPropertiesForModelKind:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 status:(NSUInteger)arg1 downloadPauseReason:(NSUInteger)arg2 presentingViewController:(id)arg3 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif