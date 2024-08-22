// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSALBUMVIEWCONTROLLERSPEC_H
#define PUPHOTOSALBUMVIEWCONTROLLERSPEC_H



#import "PULegacyViewControllerSpec.h"

@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec

@property (readonly, nonatomic) CGFloat contentCornerRadius;
@property (readonly, nonatomic) UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) NSInteger fullMomentsSectionHeaderStyle; // ivar: _fullMomentsSectionHeaderStyle
@property (readonly, nonatomic) BOOL shouldUseAspectItems; // ivar: _shouldUseAspectItems


+(id)padSpec;
+(id)phoneSpec;
-(NSInteger)cellFillMode;
-(id)gridSpec;
-(void)configureCollectionViewGridLayout:(id)arg0 ;


@end


#endif