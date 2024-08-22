// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSFONTCENTER_H
#define VSFONTCENTER_H

@class UIFont, UITraitCollection;
@protocol UITraitEnvironment;

#import <Foundation/Foundation.h>


@interface VSFontCenter : NSObject

@property (copy, nonatomic) UIFont *appAgeRatingFont; // ivar: _appAgeRatingFont
@property (copy, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (copy, nonatomic) UIFont *calloutFont; // ivar: _calloutFont
@property (copy, nonatomic) UIFont *caption1Font; // ivar: _caption1Font
@property (copy, nonatomic) UIFont *caption2Font; // ivar: _caption2Font
@property (copy, nonatomic) UIFont *footnoteFont; // ivar: _footnoteFont
@property (copy, nonatomic) UIFont *headlineFont; // ivar: _headlineFont
@property (copy, nonatomic) UIFont *subheadlineFont; // ivar: _subheadlineFont
@property (copy, nonatomic) UIFont *title0Font; // ivar: _title0Font
@property (copy, nonatomic) UIFont *title1Font; // ivar: _title1Font
@property (copy, nonatomic) UIFont *title2Font; // ivar: _title2Font
@property (copy, nonatomic) UIFont *title3Font; // ivar: _title3Font
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (weak, nonatomic) NSObject<UITraitEnvironment> *traitEnvironment; // ivar: _traitEnvironment


-(id)init;
-(id)initWithTraitEnvironment:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateFontsWithTraitCollection:(id)arg0 ;
-(void)dealloc;


@end


#endif