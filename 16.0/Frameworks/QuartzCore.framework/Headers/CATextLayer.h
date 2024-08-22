// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATEXTLAYER_H
#define CATEXTLAYER_H

@class NSString;


#import "CALayer.h"

@interface CATextLayer : CALayer {
    *CATextLayerPrivate _state;
}


@property (copy) NSString *alignmentMode;
@property BOOL allowsFontSubpixelQuantization;
@property *void font;
@property CGFloat fontSize;
@property *CGColor foregroundColor;
@property (copy) id *string;
@property (readonly, getter=isTruncated) BOOL truncated;
@property (copy) NSString *truncationMode;
@property (copy) id *truncationString;
@property (getter=isWrapped) BOOL wrapped;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)wrapped;
-(id)_createStringDict;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(id)init;
-(struct CGSize )_preferredSize;
-(struct __CTLine *)_createTruncationToken;
-(struct __CTTypesetter *)_retainTypesetter;
-(void)_applyLinesToFunction:(*unk)arg0 info:(*void)arg1 ;
-(void)_applyLinesToFunction:(*unk)arg0 info:(*void)arg1 truncated:(*BOOL)arg2 ;
-(void)_drawLine:(struct __CTLine *)arg0 inContext:(struct CGContext *)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)_prepareContext:(struct CGContext *)arg0 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif