// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSVARIABLEWIDTHSTRING_H
#define __NSVARIABLEWIDTHSTRING_H

@class NSDictionary;


#import "NSString.h"

@interface __NSVariableWidthString : NSString {
    NSDictionary *_variants;
    NSString *_defaultString;
}


@property (readonly) NSUInteger length;


-(id)_widthVariants;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formatConfiguration;
-(id)initWithString:(id)arg0 widthVariants:(id)arg1 ;
-(id)initWithWidthContexts:(id)arg0 ;
-(id)initWithWidthVariants:(id)arg0 ;
-(id)variantFittingPresentationWidth:(NSInteger)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif