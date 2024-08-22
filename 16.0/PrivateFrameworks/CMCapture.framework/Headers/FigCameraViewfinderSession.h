// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAMERAVIEWFINDERSESSION_H
#define FIGCAMERAVIEWFINDERSESSION_H


#import <Foundation/Foundation.h>

#import "FigDelegateStorage.h"

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}




-(id)init;
-(void)closePreviewStream;
-(void)dealloc;
-(void)openPreviewStreamWithOptions:(id)arg0 ;


@end


#endif