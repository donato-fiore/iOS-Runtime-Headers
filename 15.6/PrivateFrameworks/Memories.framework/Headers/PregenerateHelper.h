// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREGENERATEHELPER_H
#define PREGENERATEHELPER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PregenerateHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSMutableArray *pipelines; // ivar: _pipelines


+(id)sharedInstance;
-(void)runPregenerateWithCollection:(id)arg0 naturalSize:(struct CGSize )arg1 completionHandler:(id)arg2 ;


@end


#endif