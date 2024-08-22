// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MXEXTENSIONREQUESTRECEIPT_H
#define _MXEXTENSIONREQUESTRECEIPT_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface _MXExtensionRequestReceipt : NSObject {
    NSTimer *_timer;
    id *_completion;
}




-(id)initWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)cancelWithTimeInterval:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif