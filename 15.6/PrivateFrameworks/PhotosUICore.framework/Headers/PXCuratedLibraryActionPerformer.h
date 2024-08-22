// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYACTIONPERFORMER_H
#define PXCURATEDLIBRARYACTIONPERFORMER_H



#import "PXActionPerformer.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

@property (readonly, nonatomic) NSInteger actionZoomLevel; // ivar: _actionZoomLevel
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)initWithActionType:(id)arg0 ;
-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performActionWithCompletionHandler:(id)arg0 ;


@end


#endif