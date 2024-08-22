// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTSCANLINEMASK_H
#define PTSCANLINEMASK_H


#import <Foundation/Foundation.h>


@interface PTScanlineMask : NSObject

@property CGRect placement; // ivar: _placement


+(id)scanlineMaskWithFocusBlurMap:(id)arg0 region:(id)arg1 ;
-(id)scanlineIter;


@end


#endif