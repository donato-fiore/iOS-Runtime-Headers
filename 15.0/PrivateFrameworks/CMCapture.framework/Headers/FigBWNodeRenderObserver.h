// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGBWNODERENDEROBSERVER_H
#define FIGBWNODERENDEROBSERVER_H

@class NSString;
@protocol BWNodeRenderDelegate;

#import <Foundation/Foundation.h>

#import "BWNode.h"

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate>

 {
    BWNode *_node;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *formatDidBecomeLiveHandler; // ivar: _formatDidBecomeLiveHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willRenderSampleBufferHandler; // ivar: _willRenderSampleBufferHandler


-(id)initWithBWNode:(id)arg0 ;
-(void)dealloc;
-(void)node:(id)arg0 format:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)node:(id)arg0 format:(id)arg1 didBecomeLiveForOutput:(id)arg2 ;
-(void)node:(id)arg0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2 ;


@end


#endif