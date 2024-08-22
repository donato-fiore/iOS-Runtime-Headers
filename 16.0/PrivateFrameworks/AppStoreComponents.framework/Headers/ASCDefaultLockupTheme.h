// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCDEFAULTLOCKUPTHEME_H
#define ASCDEFAULTLOCKUPTHEME_H

@class NSString;
@protocol ASCLockupTheme, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCDefaultLockupTheme : NSObject <ASCLockupTheme, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)numberOfLinesInSubtitleForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(NSInteger)numberOfLinesInTitleForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(NSInteger)preferredLabelAlignmentForSize:(id)arg0 ;
+(id)headingLabelColorForView:(id)arg0 ;
+(id)headingLabelFontForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)offerStatusLabelFontForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)sharedTheme;
+(id)subtitleLabelFontForView:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)titleLabelFontForView:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )preferredIconSizeForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(void)updateOfferStatusLabelColorForView:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyToLockupContentView:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;


@end


#endif