// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKVIEWMANAGER_H
#define PUPARALLAXLAYERSTACKVIEWMANAGER_H

@class NSArray, NSString, NSMutableDictionary;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PUParallaxLayerStackViewModel.h"

@interface PUParallaxLayerStackViewManager : NSObject <PXChangeObserver>



@property (readonly, nonatomic) NSArray *createdLayerViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) PUParallaxLayerStackViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSMutableDictionary *viewsByLayerIdentifier; // ivar: _viewsByLayerIdentifier


-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)viewForLayer:(id)arg0 ;
-(void)_layoutLayerView:(id)arg0 ;
-(void)_layoutViews;
-(void)_updateViewContents;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif