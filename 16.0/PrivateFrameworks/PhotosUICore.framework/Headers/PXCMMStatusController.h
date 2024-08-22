// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSTATUSCONTROLLER_H
#define PXCMMSTATUSCONTROLLER_H

@class NSString;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXMomentShareStatusPresentation.h"
#import "PXStatusViewModel.h"

@interface PXCMMStatusController : NSObject <PXChangeObserver>

 {
    PXMomentShareStatusPresentation *_statusPresentation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStatusViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)initWithStatusPresentation:(id)arg0 viewModel:(id)arg1 ;
-(void)_updateWithChangeDescriptor:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif