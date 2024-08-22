// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPZOOMPROCESSORREQUEST_H
#define BWDEEPZOOMPROCESSORREQUEST_H

@protocol BWDeepZoomProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWDeepZoomProcessorInput.h"

@interface BWDeepZoomProcessorRequest : NSObject

@property (readonly, nonatomic) NSObject<BWDeepZoomProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWDeepZoomProcessorInput *input; // ivar: _input


-(id)description;
-(void)dealloc;


@end


#endif