// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSCONSTANTSMAPPING_H
#define ABSCONSTANTSMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ABSConstantsMapping : NSObject

@property (retain, nonatomic) id *defaultConstant; // ivar: _defaultConstant
@property (retain, nonatomic) NSDictionary *mapping; // ivar: _mapping


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
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)CNToABSourceTypeConstantsMapping;
-(id)initWithMapping:(id)arg0 ;
-(id)invertedMapping;
-(id)mappedConstant:(id)arg0 ;


@end


#endif