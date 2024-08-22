// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDYNAMICSDEBUG_H
#define UIDYNAMICSDEBUG_H

@class GLKBaseEffect, EAGLContext, NSString, GLKView;
@protocol GLKViewDelegate;

#import <Foundation/Foundation.h>

#import "UIDynamicAnimator.h"

@interface UIDynamicsDebug : NSObject <GLKViewDelegate>

 {
    unsigned int _vertexBuffer;
    ? _vertices;
    GLKBaseEffect *_effect;
    EAGLContext *_ctx;
}


@property (weak, nonatomic) UIDynamicAnimator *animator; // ivar: _animator
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GLKView *debugView; // ivar: _debugView
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showFields; // ivar: _showFields
@property (nonatomic) BOOL showOutlineInterior; // ivar: _showOutlineInterior
@property (nonatomic) BOOL showPhysics; // ivar: _showPhysics
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAnimator:(id)arg0 ;
-(void)_setupDebugViewIfNeccessary;
-(void)_teardownDebugView;
-(void)captureDebugInformation;
-(void)dealloc;
-(void)glkView:(id)arg0 drawInRect:(struct CGRect )arg1 ;
-(void)setNeedsDisplay;


@end


#endif