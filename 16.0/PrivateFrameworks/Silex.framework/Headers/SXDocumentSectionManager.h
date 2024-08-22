// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDOCUMENTSECTIONMANAGER_H
#define SXDOCUMENTSECTIONMANAGER_H

@class NSMutableDictionary, NSString, TFMultiDelegate, NSMutableSet;
@protocol SXViewportChangeListener, SXDocumentSectionManager, SXDocumentSectionHosting;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager>



@property (readonly, nonatomic) NSMutableDictionary *blueprints; // ivar: _blueprints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<SXDocumentSectionHosting> *hosting; // ivar: _hosting
@property (readonly, nonatomic) TFMultiDelegate *multiScrollDelegate; // ivar: _multiScrollDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport
@property (readonly, nonatomic) NSMutableSet *visibleViewControllers; // ivar: _visibleViewControllers


-(CGFloat)heightForBlueprint:(id)arg0 canvasSize:(struct CGSize )arg1 traitCollection:(id)arg2 ;
-(id)initWithSectionHosting:(id)arg0 viewport:(id)arg1 appStateMonitor:(id)arg2 ;
-(id)view;
-(id)viewController;
-(void)applySectionBlueprint:(id)arg0 identifier:(id)arg1 offset:(struct CGPoint )arg2 size:(struct CGSize )arg3 ;
-(void)endImpressions;
-(void)performDisappearanceTransitionForVisibleViewControllers;
-(void)updateViewControllerVisibility;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 documentSizeDidChangeFromSize:(struct CGSize )arg1 ;


@end


#endif