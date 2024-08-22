// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCFONTFAMILY_H
#define TCFONTFAMILY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCFontFamily : NSObject

@property (readonly, nonatomic) NSArray *members; // ivar: _members
@property (readonly, nonatomic) NSDictionary *namesByLanguage; // ivar: _namesByLanguage


-(BOOL)allFamilyIsBold;
-(BOOL)allFamilyIsItalic;
-(BOOL)doesAnyNonBoldVariantExistForFont:(id)arg0 ;
-(BOOL)traitsAreAdditive;
-(NSUInteger)boldFontIndexInWeightVariants:(id)arg0 ;
-(NSUInteger)regularFontIndexInWeightVariants:(id)arg0 ;
-(id)bestMatchForStyling:(struct TCFontStyling )arg0 ;
-(id)description;
-(id)englishName;
-(id)equivalentDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithNamesByLanguage:(id)arg0 members:(id)arg1 ;
-(id)memberForFullName:(id)arg0 ;
-(id)memberForPSName:(id)arg0 ;
-(id)regularVariant:(BOOL)arg0 ;
-(id)variantByAddingBoldToFont:(id)arg0 ;
-(id)variantByRemovingBoldFromFont:(id)arg0 ;
-(id)variantByTogglingItalicOfFont:(id)arg0 ;
-(id)weightVariantsOfFont:(id)arg0 ;


@end


#endif