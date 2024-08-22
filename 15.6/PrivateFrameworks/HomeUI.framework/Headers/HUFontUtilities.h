// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFONTUTILITIES_H
#define HUFONTUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUFontUtilities : NSObject



+(id)_excessiveLineHeightCharacterSet;
+(id)fontDescriptorWithMonospacedDigitsForFontDescriptor:(id)arg0 ;
+(id)preferredFontForTextStyle:(id)arg0 traits:(unsigned int)arg1 ;
+(id)staticPreferredFontForTextStyle:(id)arg0 ;
+(id)staticPreferredFontForTextStyle:(id)arg0 traits:(unsigned int)arg1 ;
+(struct UIEdgeInsets )languageAwareOutsetsForString:(id)arg0 withFont:(id)arg1 ;


@end


#endif