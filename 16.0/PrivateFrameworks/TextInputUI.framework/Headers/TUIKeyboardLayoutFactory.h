// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIKEYBOARDLAYOUTFACTORY_H
#define TUIKEYBOARDLAYOUTFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TUIKBGraphSerialization.h"

@interface TUIKeyboardLayoutFactory : NSObject

@property (retain) TUIKBGraphSerialization *decoder; // ivar: _decoder
@property (retain) NSMutableDictionary *internalCache; // ivar: _internalCache
@property (readonly, nonatomic) *void layoutsLibraryHandle; // ivar: _layoutsLibraryHandle
@property (retain, nonatomic) NSMutableDictionary *overlayDecoders; // ivar: _overlayDecoders


+(id)layoutsFileNameForDeviceClass;
+(id)sharedKeyboardFactory;
-(id)init;
-(id)keyboardPrefixForWidth:(CGFloat)arg0 andEdge:(BOOL)arg1 ;
-(id)keyboardSuffixForScreenDimensions:(struct CGSize )arg0 ;
-(id)keyboardWithName:(id)arg0 inCache:(id)arg1 ;
-(void)_createDecoderFromFilename:(id)arg0 ;
-(void)_createDecoderIfNecessary;
-(void)dealloc;
-(void)setData:(id)arg0 forKeyboard:(id)arg1 ;


@end


#endif