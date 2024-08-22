// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECOMPACTCOLLECTIONVIEWMODEL_H
#define MKPLACECOMPACTCOLLECTIONVIEWMODEL_H

@class UIColor, GEOGuideLocation, UIImage, NSAttributedString, UIFont;

#import <Foundation/Foundation.h>


@interface MKPlaceCompactCollectionViewModel : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) GEOGuideLocation *guideLocation; // ivar: _guideLocation
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isWorldwide;
@property (nonatomic) CGSize photoSize; // ivar: _photoSize
@property (retain, nonatomic) NSAttributedString *subTitle; // ivar: _subTitle
@property (retain, nonatomic) UIFont *subTitleFont; // ivar: _subTitleFont
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) BOOL useBorderHighlight; // ivar: _useBorderHighlight


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithGuideLocation:(id)arg0 titleFont:(id)arg1 subTitleFont:(id)arg2 context:(NSInteger)arg3 useBorderHighlight:(BOOL)arg4 ;
-(void)compactCollectionImageForSize:(struct CGSize )arg0 onCompletion:(id)arg1 ;


@end


#endif