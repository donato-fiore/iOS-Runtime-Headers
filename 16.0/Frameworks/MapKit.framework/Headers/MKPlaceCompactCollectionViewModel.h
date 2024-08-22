// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACECOMPACTCOLLECTIONVIEWMODEL_H
#define MKPLACECOMPACTCOLLECTIONVIEWMODEL_H

@class NSArray, UIColor, GEOGuideLocation, UIImage, NSString, NSAttributedString, UIFont;

#import <Foundation/Foundation.h>


@interface MKPlaceCompactCollectionViewModel : NSObject {
    NSArray *_supportedSizeCategories;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) GEOGuideLocation *guideLocation; // ivar: _guideLocation
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isWorldwide;
@property (nonatomic) CGSize photoSize; // ivar: _photoSize
@property (retain, nonatomic) NSString *preferredSizeCategory; // ivar: _preferredSizeCategory
@property (retain, nonatomic) NSAttributedString *subTitle; // ivar: _subTitle
@property (retain, nonatomic) UIFont *subTitleFont; // ivar: _subTitleFont
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) BOOL useBorderHighlight; // ivar: _useBorderHighlight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldShowSubtitleForCategory:(id)arg0 ;
-(id)description;
-(id)initWithGuideLocation:(id)arg0 context:(NSInteger)arg1 useBorderHighlight:(BOOL)arg2 ;
-(void)compactCollectionImageForSize:(struct CGSize )arg0 onCompletion:(id)arg1 ;
-(void)contentCategorySizeDidChange:(id)arg0 ;
-(void)initializeFonts;


@end


#endif