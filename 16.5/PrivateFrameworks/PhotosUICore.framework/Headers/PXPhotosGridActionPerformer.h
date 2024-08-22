// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSGRIDACTIONPERFORMER_H
#define PXPHOTOSGRIDACTIONPERFORMER_H



#import "PXActionPerformer.h"
#import "PXContentFilterState.h"
#import "PXLibraryFilterState.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosGridActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState;
@property (readonly, nonatomic) PXLibraryFilterState *currentLibraryFilterState;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(id)initWithActionType:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 actionType:(id)arg1 ;


@end


#endif