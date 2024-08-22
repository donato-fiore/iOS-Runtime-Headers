// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIHORIZONTALLOCKUPLAYOUT_H
#define SKUIHORIZONTALLOCKUPLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SKUIHorizontalLockupLayout : NSObject {
    CGFloat _imageMarginRight;
    CGFloat _metadataColumnMinHeight;
    CGFloat _tallestNonMetadataColumnHeight;
}


@property (readonly, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, nonatomic) UIEdgeInsets metadataColumnEdgeInsets; // ivar: _metadataColumnEdgeInsets


+(id)fontForButtonViewElement:(id)arg0 context:(id)arg1 ;
+(id)fontForLabelViewElement:(id)arg0 context:(id)arg1 ;
+(id)fontForOrdinalViewElement:(id)arg0 context:(id)arg1 ;
-(CGFloat)_heightForMetadataColumn:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(CGFloat)bottomPaddingForViewElement:(id)arg0 ;
-(CGFloat)columnSpacingForColumnIdentifier:(NSInteger)arg0 ;
-(CGFloat)topPaddingForViewElement:(id)arg0 ;
-(id)initWithLockup:(id)arg0 context:(id)arg1 ;
-(struct CGSize )_sizeForRightAlignedColumn:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(struct CGSize )_sizeForViewElement:(id)arg0 width:(NSInteger)arg1 context:(id)arg2 ;
-(void)sizeColumnsToFitWidth:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif