// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSCENELAYER_H
#define FBSSCENELAYER_H

@class CAContext, NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface FBSSceneLayer : NSObject <BSXPCCoding>

 {
    CGFloat _level;
}


@property (readonly, nonatomic) NSInteger alignment;
@property (readonly, nonatomic, getter=_context) CAContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCAContextLayer;
-(BOOL)isExternalSceneLayer;
-(BOOL)isKeyboardLayer;
-(BOOL)isKeyboardProxyLayer;
-(CGFloat)_unsafe_level;
-(id)_initWithCAContext:(id)arg0 fallbackLevel:(CGFloat)arg1 ;
-(id)_succinctDescription;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)_unsafe_captureLevel;
-(void)dealloc;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif