// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETWRITERINPUTGROUPINTERNAL_H
#define AVASSETWRITERINPUTGROUPINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInput.h"

@interface AVAssetWriterInputGroupInternal : NSObject {
    NSArray *inputs;
    AVAssetWriterInput *defaultInput;
    NSArray *provisionalInputs;
}






@end


#endif