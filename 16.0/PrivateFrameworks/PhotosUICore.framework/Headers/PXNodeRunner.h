// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNODERUNNER_H
#define PXNODERUNNER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface PXNodeRunner : NSObject {
    NSOperationQueue *_operationQueue;
}


@property NSInteger maxConcurrentRunNodeCount;
@property NSInteger qualityOfService;


-(id)init;
-(void)_processRunGraph:(id)arg0 ;
-(void)processGraphForRunNode:(id)arg0 ;


@end


#endif