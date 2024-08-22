// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONFOOTERVIEW_H
#define SLCOLLABORATIONFOOTERVIEW_H

@protocol SLCollaborationFooterViewDelegate;


#import "SLRemoteView.h"
#import "SLCollaborationFooterViewModel.h"

@interface SLCollaborationFooterView : SLRemoteView

@property (weak, nonatomic) NSObject<SLCollaborationFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SLCollaborationFooterViewModel *model; // ivar: _model


-(CGFloat)expectedHeightForWidth:(CGFloat)arg0 ;
-(id)initWithModel:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)makePlaceholderSlotContentForStyle:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)renderRemoteContentForLayerContextID:(NSUInteger)arg0 style:(id)arg1 yield:(id)arg2 ;
-(void)updateRemoteRenderingEnabled;
-(void)updateWithNewModel:(id)arg0 ;


@end


#endif