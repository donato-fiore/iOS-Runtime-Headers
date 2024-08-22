// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFADDRESSPICKERREFORMATTER_H
#define MFADDRESSPICKERREFORMATTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MFAddressPickerReformatter : NSObject {
    NSArray *_addresses;
    NSArray *_reformattedAddresses;
    CGFloat _maximumWidth;
    CGFloat _minimumFontSize;
    CGFloat _maximumFontSize;
    CGFloat _fontSize;
    BOOL _attributesDisabled;
}




-(BOOL)_attemptUniquingDisplayedStringsUsingBlock:(id)arg0 ;
-(BOOL)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg0 ;
-(NSUInteger)_defaultOptions;
-(NSUInteger)numberOfReformattedAddresses;
-(id)_reformattedAddressesByDisplayedStrings;
-(id)_saveMiddleTruncationRanges;
-(id)reformattedAddressAtIndex:(NSUInteger)arg0 ;
-(id)reformattedAddressStringAtIndex:(NSUInteger)arg0 ;
-(void)_attemptUniquingDisplayedStrings;
-(void)_determineFontSize:(*BOOL)arg0 ;
-(void)_expandAllLocalParts;
-(void)_invalidateReformattedAddresses;
-(void)_restoreMiddleTruncationRanges:(id)arg0 ;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(void)_updateReformattedAddressesIfNecessary;
-(void)setAddresses:(id)arg0 ;
-(void)setAttributesDisabled:(BOOL)arg0 ;
-(void)setFontSize:(CGFloat)arg0 ;
-(void)setMaximumWidth:(CGFloat)arg0 ;
-(void)setMinimumFontSize:(CGFloat)arg0 maximumFontSize:(CGFloat)arg1 ;


@end


#endif