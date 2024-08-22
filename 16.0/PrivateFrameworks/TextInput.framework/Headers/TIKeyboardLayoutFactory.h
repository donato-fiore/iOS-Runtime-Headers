// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDLAYOUTFACTORY_H
#define TIKEYBOARDLAYOUTFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIKeyboardLayoutFactory : NSObject

@property (retain) NSMutableDictionary *internalCache; // ivar: _internalCache
@property (readonly, nonatomic) *void layoutsLibraryHandle; // ivar: _layoutsLibraryHandle


+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(id)init;
-(id)keyboardPrefixForWidth:(CGFloat)arg0 andEdge:(BOOL)arg1 ;
-(id)keyboardWithName:(id)arg0 inCache:(id)arg1 ;


@end


#endif