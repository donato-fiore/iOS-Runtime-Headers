// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMUDOWNLOADWAITINGALERTCONTROLLER_H
#define NMUDOWNLOADWAITINGALERTCONTROLLER_H

@class MPModelObject, NMSKeepLocalRequestOptions, UIViewController;

#import <Foundation/Foundation.h>


@interface NMUDownloadWaitingAlertController : NSObject {
    MPModelObject *_modelObject;
    NSUInteger _status;
    NSUInteger _downloadPauseReason;
    NMSKeepLocalRequestOptions *_keepLocalRequestOptions;
    UIViewController *_presentingViewController;
}




+(id)requiredPropertiesForModelKind:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 status:(NSUInteger)arg1 downloadPauseReason:(NSUInteger)arg2 options:(id)arg3 presentingViewController:(id)arg4 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif