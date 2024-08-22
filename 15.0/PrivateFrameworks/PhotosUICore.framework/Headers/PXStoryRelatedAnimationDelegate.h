// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDANIMATIONDELEGATE_H
#define PXSTORYRELATEDANIMATIONDELEGATE_H

@class NSString;
@protocol PXGAnimationDelegate;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXStoryRelatedAnimationDelegate : NSObject <PXGAnimationDelegate>

 {
    PXGLayout *_rootLayout;
    CGRect _sourceRect;
    CGRect _visibleRect;
    CGFloat _tolerance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSourceLayout:(id)arg0 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif