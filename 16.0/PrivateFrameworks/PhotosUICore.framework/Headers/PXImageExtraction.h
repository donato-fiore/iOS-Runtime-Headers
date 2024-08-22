// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMAGEEXTRACTION_H
#define PXIMAGEEXTRACTION_H


#import <Foundation/Foundation.h>


@interface PXImageExtraction : NSObject

@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled; // ivar: _cancelled


-(void)cancel;


@end


#endif