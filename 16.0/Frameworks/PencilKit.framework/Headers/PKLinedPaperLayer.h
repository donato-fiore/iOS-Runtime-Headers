// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLINEDPAPERLAYER_H
#define PKLINEDPAPERLAYER_H

@class CALayer;
@protocol PKLinedPaperLayerDelegate;



@interface PKLinedPaperLayer : CALayer

@property (readonly, weak, nonatomic) NSObject<PKLinedPaperLayerDelegate> *linedPaperLayerDelegate; // ivar: _linedPaperLayerDelegate


-(id)_attachmentContainerView;
-(id)_linedPaper;
-(id)_traitCollection;
-(id)initWithLinedPaperLayerDelegate:(id)arg0 ;
-(void)updateLinesFromAttachmentBounds:(struct CGRect )arg0 ;
-(void)updateSublayersFromAttachmentBounds:(struct CGRect )arg0 ;


@end


#endif