// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSBARBUTTONITEMSCONTROLLER_H
#define PXPHOTOSBARBUTTONITEMSCONTROLLER_H


#import <Foundation/Foundation.h>

#import "_PXPhotosBarButtonSpecManager.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosBarButtonItemsController : NSObject

@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


-(id)_createBarButtonItemWithTitle:(id)arg0 orSystemItem:(NSInteger)arg1 orSystemIconName:(id)arg2 target:(id)arg3 action:(SEL)arg4 menuAction:(SEL)arg5 ;
-(id)createBarButtonItemWithSystemIconName:(id)arg0 target:(id)arg1 action:(SEL)arg2 menuAction:(SEL)arg3 ;
-(id)createBarButtonItemWithSystemItem:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 menuAction:(SEL)arg3 ;
-(id)createBarButtonItemWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 menuAction:(SEL)arg3 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 viewModel:(id)arg1 ;


@end


#endif