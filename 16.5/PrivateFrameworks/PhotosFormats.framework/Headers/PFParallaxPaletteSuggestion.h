// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXPALETTESUGGESTION_H
#define PFPARALLAXPALETTESUGGESTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PFParallaxColor.h"

@interface PFParallaxPaletteSuggestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PFParallaxColor *primaryColor; // ivar: _primaryColor
@property (readonly, nonatomic) PFParallaxColor *secondaryColor; // ivar: _secondaryColor


+(BOOL)supportsSecureCoding;
+(id)dictionaryWithPaletteSuggestion:(id)arg0 ;
+(id)paletteSuggestionWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSuggestion:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryColor:(id)arg0 secondaryColor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif