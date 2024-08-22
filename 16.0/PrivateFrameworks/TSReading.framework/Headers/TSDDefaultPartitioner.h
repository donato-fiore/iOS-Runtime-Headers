// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDDEFAULTPARTITIONER_H
#define TSDDEFAULTPARTITIONER_H

@class TSUPointerKeyDictionary, NSString;
@protocol TSDPartitioner, TSDCanvasDelegate, TSDInfo;

#import <Foundation/Foundation.h>

#import "TSDCanvas.h"
#import "TSDLayout.h"

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate>

 {
    NSObject<TSDInfo> *mInfo;
    TSDCanvas *mCanvas;
    TSDLayout *mLayout;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(BOOL)arg2 delta:(int)arg3 ;
-(NSUInteger)p_edgesForHintBounds:(struct CGRect )arg0 ;
-(id)documentRoot;
-(id)hintForLayout:(id)arg0 ;
-(id)i_layout;
-(id)i_repForCanvas:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutForHint:(id)arg0 parentLayout:(id)arg1 ;
-(id)nextHintForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)nextLayoutForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)p_firstHintForSize:(struct CGSize )arg0 ;
-(id)p_nextHintForSize:(struct CGSize )arg0 previousHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(struct CGImage *)i_cachedImageForCanvas:(id)arg0 ;
-(void)dealloc;
-(void)i_registerPartialRep:(id)arg0 ;
-(void)i_removeCachedImageForCanvas:(id)arg0 ;
-(void)i_setCachedImage:(struct CGImage *)arg0 forCanvas:(id)arg1 ;
-(void)i_unregisterPartialRep:(id)arg0 ;
-(void)p_generateLayouts;
-(void)p_teardownLayouts;


@end


#endif