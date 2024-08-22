// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYCURATIONDEBUGACTIONPERFORMER_H
#define PXCURATEDLIBRARYCURATIONDEBUGACTIONPERFORMER_H



#import "PXCuratedLibraryAssetCollectionActionPerformer.h"
#import "PXGLayout.h"

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, weak, nonatomic) PXGLayout *layoutForDiagnosticDescription; // ivar: _layoutForDiagnosticDescription


-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)initWithViewModel:(id)arg0 assetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif