// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYFILTERACTIONPERFORMER_H
#define PXCURATEDLIBRARYFILTERACTIONPERFORMER_H

@class NSString;
@protocol PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate;


#import "PXCuratedLibraryActionPerformer.h"
#import "PXUIFilterController.h"

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXUIFilterController *filterController; // ivar: _filterController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAlreadyDone;
-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(BOOL)performerResetsAfterCompletion;
-(id)activitySystemImageName;
-(id)activityType;
-(id)contentFilterHiddenTypesForFilterController:(id)arg0 ;
-(id)libraryFilterHiddenTypesForFilterController:(id)arg0 ;
-(void)filterController:(id)arg0 contentFilterStateChanged:(id)arg1 ;
-(void)filterController:(id)arg0 libraryFilterStateChanged:(id)arg1 ;
-(void)filterControllerDidClose:(id)arg0 ;
-(void)performUserInteractionTask;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif