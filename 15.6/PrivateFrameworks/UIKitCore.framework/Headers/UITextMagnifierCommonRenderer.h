// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTMAGNIFIERCOMMONRENDERER_H
#define UITEXTMAGNIFIERCOMMONRENDERER_H

@class NSDictionary, CALayer;


#import "UIView.h"

@interface UITextMagnifierCommonRenderer : UIView {
    BOOL m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    BOOL _isRegisteredForGeometryChanges;
}




-(id)backgroundColourIfNecessary;
-(id)magnifier;
-(id)visualsForMagnifier;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)loadImages;
-(void)performOperations:(id)arg0 ;
-(void)update;


@end


#endif