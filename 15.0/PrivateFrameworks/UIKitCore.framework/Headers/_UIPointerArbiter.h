// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPOINTERARBITER_H
#define _UIPOINTERARBITER_H

@class NSString;
@protocol _UIPointerArbitrating;

#import <Foundation/Foundation.h>


@interface _UIPointerArbiter : NSObject <_UIPointerArbitrating>

 {
    id<_UIPointerArbitrating> *_core;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger pointerState;
@property (readonly) Class superclass;


+(id)sharedArbiter;
-(id)init;
// -(void)applyStyle:(id)arg0 forRegion:(id)arg1 effectSourceHandler:(id)arg2 completion:(unk)arg3  ;
-(void)beginScrollingWithRegion:(id)arg0 ;
-(void)endScrollingWithRegion:(id)arg0 ;
-(void)exitRegion:(id)arg0 removeStyle:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif