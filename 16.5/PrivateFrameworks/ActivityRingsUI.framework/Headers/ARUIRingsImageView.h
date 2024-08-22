// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGSIMAGEVIEW_H
#define ARUIRINGSIMAGEVIEW_H

@class UIImageView, NSString;
@protocol ARUIRingGroupDelegate;


#import "ARUIRenderContext.h"
#import "ARUIRenderer.h"
#import "ARUIRingGroup.h"

@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate>

 {
    ARUIRenderContext *_renderContext;
    BOOL _needsImageRender;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARUIRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) ARUIRingGroup *ringGroup; // ivar: _ringGroup
@property (readonly) Class superclass;


-(id)initWithRingGroup:(id)arg0 ;
-(id)initWithRingGroup:(id)arg0 renderer:(id)arg1 ;
-(void)_renderImage;
-(void)_updateRenderContext;
-(void)layoutSubviews;
-(void)ringGroupHasUpdated:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif