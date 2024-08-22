// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAPKGLYPHWRAPPER_H
#define LAPKGLYPHWRAPPER_H

@class UIView<GlyphMethods>, UIView;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LAPKGlyphWrapper : NSObject

@property (nonatomic) BOOL fastAnimations; // ivar: _fastAnimations
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *glyphQueue; // ivar: _glyphQueue
@property (readonly, nonatomic) UIView<GlyphMethods> *glyphView; // ivar: _glyphView
@property (nonatomic) BOOL grayedOut; // ivar: _grayedOut
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) UIView<GlyphMethods> *idleTouchID; // ivar: _idleTouchID
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(*void)_loadPKUI;
+(Class)_loadClassFromString:(id)arg0 ;
+(id)glyphWithStyle:(NSInteger)arg0 frame:(struct CGRect )arg1 ;
-(CGFloat)_minimumAnimationDurationForState:(NSInteger)arg0 ;
-(id)initWithGlyphView:(id)arg0 ;
-(void)setState:(NSInteger)arg0 idleTouchID:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif