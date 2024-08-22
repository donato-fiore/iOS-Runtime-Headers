// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREPREPAREBRACKETREQUEST_H
#define AVCAPTUREPREPAREBRACKETREQUEST_H

@class FigCaptureStillImageSettings;

#import <Foundation/Foundation.h>


@interface AVCapturePrepareBracketRequest : NSObject

@property (readonly) id *completionBlock; // ivar: _completionBlock
@property (readonly) FigCaptureStillImageSettings *settings; // ivar: _settings


// +(id)prepareBracketRequestWithCompletionBlock:(id)arg0 settings:(unk)arg1  ;
// -(id)_initWithCompletionBlock:(id)arg0 settings:(unk)arg1  ;
-(void)dealloc;


@end


#endif