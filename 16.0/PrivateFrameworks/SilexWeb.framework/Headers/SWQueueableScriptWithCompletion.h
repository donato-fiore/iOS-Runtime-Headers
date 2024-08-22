// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWQUEUEABLESCRIPTWITHCOMPLETION_H
#define SWQUEUEABLESCRIPTWITHCOMPLETION_H

@protocol SWScript;

#import <Foundation/Foundation.h>


@interface SWQueueableScriptWithCompletion : NSObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSObject<SWScript> *script; // ivar: _script


-(id)initWithScript:(id)arg0 completion:(id)arg1 ;


@end


#endif