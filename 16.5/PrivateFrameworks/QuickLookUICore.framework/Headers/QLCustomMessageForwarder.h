// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCUSTOMMESSAGEFORWARDER_H
#define QLCUSTOMMESSAGEFORWARDER_H

@protocol QLPreviewItemViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface QLCustomMessageForwarder : NSObject {
    id<QLPreviewItemViewControllerDelegate> *_previewDelegate;
}




-(id)initWithPreviewDelegate:(id)arg0 ;
-(void)forwardMessageToHostOfCustomViewController:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif