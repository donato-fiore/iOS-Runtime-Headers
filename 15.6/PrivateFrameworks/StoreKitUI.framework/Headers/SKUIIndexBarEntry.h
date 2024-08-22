// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIINDEXBARENTRY_H
#define SKUIINDEXBARENTRY_H

@class UIColor, NSAttributedString, UIImage;

#import <Foundation/Foundation.h>


@interface SKUIIndexBarEntry : NSObject {
    CGSize _contentSize;
    BOOL _hasValidContentSize;
    UIColor *_tintColor;
}


@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, nonatomic) NSAttributedString *entryAttributedString;
@property (readonly, nonatomic) UIImage *entryImage;
@property (nonatomic) NSInteger entryType; // ivar: _entryType
@property (readonly, nonatomic) CGSize size;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) NSInteger visibilityPriority; // ivar: _visibilityPriority


+(id)entryWithAttributedString:(id)arg0 ;
+(id)entryWithImage:(id)arg0 ;
+(id)placeholderEntryWithSize:(struct CGSize )arg0 ;
+(id)systemCombinedEntry;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(struct CGSize )_calculatedContentSize;
-(void)_drawContentInRect:(struct CGRect )arg0 ;
-(void)_drawInRect:(struct CGRect )arg0 ;


@end


#endif