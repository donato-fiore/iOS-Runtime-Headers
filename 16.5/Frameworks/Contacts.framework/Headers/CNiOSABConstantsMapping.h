// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABCONSTANTSMAPPING_H
#define CNIOSABCONSTANTSMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CNiOSABConstantsMapping : NSObject

@property (retain, nonatomic) id *defaultConstant; // ivar: _defaultConstant
@property (retain, nonatomic) NSDictionary *mapping; // ivar: _mapping


+(id)ABToCNContactShortNameFormatConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonShortNameFormatConstantsMapping;
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)CNToABSourceTypeConstantsMapping;
-(id)initWithMapping:(id)arg0 ;
-(id)invertedMapping;
-(id)mappedConstant:(id)arg0 ;


@end


#endif