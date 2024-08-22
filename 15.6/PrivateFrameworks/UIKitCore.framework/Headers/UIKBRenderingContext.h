// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERINGCONTEXT_H
#define UIKBRENDERINGCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBRenderConfig.h"

@interface UIKBRenderingContext : NSObject <NSCopying>



@property (nonatomic) NSInteger handBias; // ivar: _handBias
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (nonatomic) NSUInteger shiftState; // ivar: _shiftState


+(id)renderingContextForRenderConfig:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRenderConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif