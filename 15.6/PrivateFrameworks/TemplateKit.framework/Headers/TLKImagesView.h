// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKIMAGESVIEW_H
#define TLKIMAGESVIEW_H

@class NUIContainerFlowView, NSString, NSMutableArray, NSArray;
@protocol NUIContainerViewDelegate, TLKImagesViewDelegate;


#import "TLKView.h"

@interface TLKImagesView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) NUIContainerFlowView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TLKImagesViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *imageButtons; // ivar: _imageButtons
@property (retain, nonatomic) NSArray *images; // ivar: _images
@property (nonatomic, getter=isPaddingDisabled) BOOL paddingDisabled; // ivar: _paddingDisabled
@property (nonatomic, getter=isSelectionEnabled) BOOL selectionEnabled; // ivar: _selectionEnabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL useGridAlignment; // ivar: _useGridAlignment


-(BOOL)usesDefaultLayoutMargins;
-(id)imageViewAtLocation:(struct CGPoint )arg0 ;
-(id)setupContentView;
-(void)_handleTap:(id)arg0 ;
-(void)_updateImages;
-(void)_updateSpacing;
-(void)observedPropertiesChanged;


@end


#endif