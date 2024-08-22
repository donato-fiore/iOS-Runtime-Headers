// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMFOOTERVIEWMODEL_H
#define PXCMMFOOTERVIEWMODEL_H

@class NSString;
@protocol PXChangeObserver;


#import "PXFooterViewModel.h"
#import "PXMomentShareStatusPresentation.h"

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver>

 {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    NSInteger _mode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMomentShareStatusPresentation:(id)arg0 mode:(NSInteger)arg1 ;
-(void)_updateAllProperties;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif