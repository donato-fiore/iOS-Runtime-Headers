// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSPANORAMAVIEWCONTROLLERSPEC_H
#define PUPHOTOSPANORAMAVIEWCONTROLLERSPEC_H



#import "PULegacyViewControllerSpec.h"

@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec



+(id)padSpec;
+(id)phoneSpec;
-(CGFloat)globalFooterHeight;
-(CGFloat)sectionHeaderHeight;
-(NSInteger)cellFillMode;
-(NSUInteger)supportedInterfaceOrientations;
-(id)gridSpec;
-(struct CGSize )_itemSizeForWidth:(CGFloat)arg0 ;
-(unsigned short)fastThumbnailImageFormat;
-(unsigned short)thumbnailImageFormat;
-(void)configureCollectionViewGridLayout:(id)arg0 referenceWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif