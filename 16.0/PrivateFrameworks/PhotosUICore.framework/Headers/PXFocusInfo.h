// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFOCUSINFO_H
#define PXFOCUSINFO_H

@class NSString, UIView;

#import <Foundation/Foundation.h>


@interface PXFocusInfo : NSObject

@property (readonly, nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIView *view; // ivar: _view
@property (nonatomic) BOOL wantsInnerBorder; // ivar: _wantsInnerBorder
@property (nonatomic) BOOL wantsOuterBorder; // ivar: _wantsOuterBorder


+(id)focusInfoWithView:(id)arg0 ;
+(id)focusInfoWithView:(id)arg0 cornerRadius:(CGFloat)arg1 cornerCurve:(id)arg2 ;
-(id)makeHaloEffectForSourceView:(id)arg0 ;


@end


#endif