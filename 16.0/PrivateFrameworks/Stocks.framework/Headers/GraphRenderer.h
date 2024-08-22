// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GRAPHRENDERER_H
#define GRAPHRENDERER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GraphRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelled;
}




+(id)sharedRenderer;
+(void)clearSharedRenderer;
-(id)init;
-(void)performRenderOperation:(id)arg0 ;


@end


#endif