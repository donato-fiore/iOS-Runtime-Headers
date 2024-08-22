// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPAGECONTROLLERCANVASDELEGATE_H
#define TPPAGECONTROLLERCANVASDELEGATE_H

@class TSDCanvas, NSString;
@protocol TSDCanvasDelegate, TSDCanvasProxyDelegate;

#import <Foundation/Foundation.h>

#import "TPDocumentRoot.h"

@interface TPPageControllerCanvasDelegate : NSObject <TSDCanvasDelegate>

 {
    TPDocumentRoot *_documentRoot;
}


@property (readonly, nonatomic) TSDCanvas *canvas; // ivar: _canvas
@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger textLayoutMustIncludeAdornmentsCounter; // ivar: _textLayoutMustIncludeAdornmentsCounter
@property (readonly, nonatomic) BOOL verticalTextAllowed;


-(BOOL)shouldShowInstructionalTextForLayout:(id)arg0 ;
-(BOOL)textLayoutMustIncludeAdornments;
-(BOOL)wantsEditingLayoutsForOffscreenInfos;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg0 canvas:(id)arg1 ;
-(struct CGRect )visibleScaledBoundsForClippingRepsOnCanvas:(id)arg0 ;
-(void)dealloc;
-(void)tearDown;


@end


#endif