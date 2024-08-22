// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILTERFOOTERCONTROLLER_H
#define PXFILTERFOOTERCONTROLLER_H

@class NSString, UIView;
@protocol PXFilterFooterViewDelegate;

#import <Foundation/Foundation.h>

#import "PXActionManager.h"
#import "PXFilterFooterView.h"
#import "PXContentFilterState.h"

@interface PXFilterFooterController : NSObject <PXFilterFooterViewDelegate>

 {
    PXActionManager *_actionManager;
    PXFilterFooterView *_footerFilterView;
    NSInteger _libraryType;
}


@property (copy, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFilterFooterView *footerFilterView;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *view; // ivar: _view


-(id)init;
-(id)initWithActionManager:(id)arg0 libraryType:(NSInteger)arg1 ;
-(void)filterFooterViewDidTapShowFilter:(id)arg0 sender:(id)arg1 ;


@end


#endif