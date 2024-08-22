// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPROTOFEATUREPLACEHOLDERVIEW_H
#define PXPROTOFEATUREPLACEHOLDERVIEW_H

@class NSString;
@protocol PXChangeObserver;


#import "PXProtoFeatureView.h"
#import "PXPhotoAnalysisStatusController.h"

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver>

 {
    PXPhotoAnalysisStatusController *_statusController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat preferredStatusWidth; // ivar: _preferredStatusWidth
@property (readonly, copy, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateStatusDescription;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif