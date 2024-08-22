// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACTIONNATURALLANGUAGEOPTIONS_H
#define HFACTIONNATURALLANGUAGEOPTIONS_H

@class HMHome, NSSet;


#import "HFSubstringNaturalLanguageOptions.h"

@interface HFActionNaturalLanguageOptions : HFSubstringNaturalLanguageOptions

@property (nonatomic) NSUInteger accessoryCountType; // ivar: _accessoryCountType
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL ignoreOptionalCharacteristics; // ivar: _ignoreOptionalCharacteristics
@property (retain, nonatomic) NSSet *objectsInContext; // ivar: _objectsInContext
@property (nonatomic) BOOL useMediaContainersNotInContext; // ivar: _useMediaContainersNotInContext


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 formattingContext:(NSInteger)arg1 ;


@end


#endif