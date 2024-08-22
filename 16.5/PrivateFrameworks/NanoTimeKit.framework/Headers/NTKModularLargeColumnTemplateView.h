// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMODULARLARGECOLUMNTEMPLATEVIEW_H
#define NTKMODULARLARGECOLUMNTEMPLATEVIEW_H



#import "NTKModularTemplateView.h"

@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView

@property (nonatomic) BOOL useNoColumnPadding; // ivar: _useNoColumnPadding


-(id)_newBodyLabelSubview;
-(id)_newHeaderLabelSubview;
-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(void)_enumerateColumnRowsWithBlock:(id)arg0 ;
-(void)_layoutRowsOfColumnsWithAlignment:(NSInteger)arg0 ;
-(void)_positionLeadingAlignedImageView:(id)arg0 label:(id)arg1 withBaselineOffset:(CGFloat)arg2 ;


@end


#endif