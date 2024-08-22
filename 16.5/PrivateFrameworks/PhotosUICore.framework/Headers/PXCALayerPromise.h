// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCALAYERPROMISE_H
#define PXCALAYERPROMISE_H

@class NSString, CALayer;
@protocol PXMutableCALayerPromise, CALayerDelegate;


#import "PXObservable.h"

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate>

 {
    BOOL _startedLayerRealization;
}


@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGFloat contentsScale; // ivar: _contentsScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setLayer:) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) BOOL rendersAsynchronously; // ivar: _rendersAsynchronously
@property (readonly, nonatomic) BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;


-(id)createCustomLayer;
-(id)init;
-(id)mutableChangeObject;
-(void)_handlePreparedLayer:(id)arg0 ;
-(void)_realizeLayer;
-(void)cancelLayerRealization;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawLayerContentInContext:(struct CGContext *)arg0 ;
-(void)invalidateLayer;
-(void)performChanges:(id)arg0 ;
-(void)startLayerRealization;


@end


#endif