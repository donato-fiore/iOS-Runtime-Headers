// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDISPLAYCONTEXT_H
#define ASDISPLAYCONTEXT_H

@class NSString, UIFont, NSDictionary;

#import <Foundation/Foundation.h>


@interface ASDisplayContext : NSObject {
    CGFloat _nameFontSize;
    CGFloat _dataFontSize;
    CGFloat _multilineDataFontSize;
    NSString *_contentSizeCategory;
}


@property (retain, nonatomic) UIFont *dataFont; // ivar: _dataFont
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (retain, nonatomic) NSDictionary *keyColors; // ivar: _keyColors
@property (retain, nonatomic) UIFont *multilineDataFont; // ivar: _multilineDataFont
@property (retain, nonatomic) UIFont *multilineUnitFont; // ivar: _multilineUnitFont
@property (retain, nonatomic) UIFont *nameFont; // ivar: _nameFont
@property (retain, nonatomic) NSDictionary *titleColors; // ivar: _titleColors
@property (retain, nonatomic) UIFont *unitFont; // ivar: _unitFont


+(id)_companionContext;
+(id)_gizmoContext;
+(id)displayContextWithName:(id)arg0 ;
+(void)_contentSizeChangeForContext:(id)arg0 withBlock:(id)arg1 ;
-(id)keyColorForDisplayMode:(NSInteger)arg0 ;
-(id)titleColorForDisplayMode:(NSInteger)arg0 ;


@end


#endif