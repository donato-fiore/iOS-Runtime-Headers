// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPREVIEWALIGNMENTGUIDE_H
#define CAMPREVIEWALIGNMENTGUIDE_H

@class UIView, NSString;
@protocol CAMPreviewAlignmentModelObserver;


#import "CAMLevelCrosshair.h"
#import "CAMPreviewAlignmentModel.h"

@interface CAMPreviewAlignmentGuide : UIView <CAMPreviewAlignmentModelObserver>



@property (readonly, nonatomic) CAMLevelCrosshair *_guidanceCrosshair; // ivar: __guidanceCrosshair
@property (readonly, nonatomic) CAMLevelCrosshair *_targetCrosshair; // ivar: __targetCrosshair
@property (readonly, nonatomic) CAMPreviewAlignmentModel *alignmentModel; // ivar: _alignmentModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)previewAlignmentModelDidChangeAlignmentTransform:(id)arg0 ;
-(void)previewAlignmentModelDidChangeOpacity:(id)arg0 ;


@end


#endif