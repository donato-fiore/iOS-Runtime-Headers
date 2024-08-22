// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMONOGRAMMER_H
#define CNMONOGRAMMER_H

@class UIImage, NSString, UIColor, UIFont, NSArray;

#import <Foundation/Foundation.h>

#import "CNMonogrammer.h"

@interface CNMonogrammer : NSObject {
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    CGFloat _innerBorderWidth;
    NSString *_silhouetteImageName;
    NSInteger _monogrammerStyle;
    CNMonogrammer *_subMonogrammer;
    UIColor *_tintColor;
    CGFloat _scale;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) NSArray *keysToFetch;
@property (readonly, nonatomic) UIImage *knockoutMaskMonogram;
@property (readonly, nonatomic) UIImage *questionMarkMonogram;
@property (readonly, nonatomic) UIImage *silhouetteMonogram;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) BOOL textKnockout; // ivar: _textKnockout


+(NSInteger)monogramTypeForContact:(id)arg0 ;
+(id)_initialsForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysIncludingImage:(BOOL)arg0 ;
+(id)requiredKeyDescriptor;
-(CGFloat)innerBorderWidth;
-(id)_copyMonogramWithImageData:(id)arg0 ;
-(id)_copyMonogramWithInitials:(id)arg0 ;
-(id)_copyMonogramWithKnockoutMask;
-(id)_copyMonogramWithSilhouette;
-(id)_initialsForFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 diameter:(CGFloat)arg1 ;
-(id)monogramForContact:(id)arg0 ;
-(id)monogramForContact:(id)arg0 isContactImage:(*BOOL)arg1 ;
-(id)monogramForContacts:(id)arg0 ;
-(id)monogramForPersonWithFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)silhouetteImageName;
-(void)_clearMonogramCache;
-(void)dealloc;
-(void)monogramsAsFlatImages;
-(void)monogramsForStark;
-(void)monogramsWithTint:(id)arg0 ;


@end


#endif