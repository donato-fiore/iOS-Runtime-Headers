// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFILTERFOOTERCONTROLLER_H
#define PXFILTERFOOTERCONTROLLER_H

@class NSString, UIView;
@protocol PXFilterFooterViewDelegate;

#import <Foundation/Foundation.h>

#import "PXActionManager.h"
#import "PXFilterFooterView.h"
#import "PXContentFilterState.h"
#import "PXLibraryFilterState.h"
#import "PXSharedLibraryStatusProvider.h"

@interface PXFilterFooterController : NSObject <PXFilterFooterViewDelegate>

 {
    PXActionManager *_actionManager;
    PXFilterFooterView *_footerFilterView;
}


@property (copy, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFilterFooterView *footerFilterView;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider; // ivar: _sharedLibraryStatusProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *view; // ivar: _view


-(id)init;
-(id)initWithActionManager:(id)arg0 ;
-(void)filterFooterViewDidTapShowFilter:(id)arg0 sender:(id)arg1 ;


@end


#endif