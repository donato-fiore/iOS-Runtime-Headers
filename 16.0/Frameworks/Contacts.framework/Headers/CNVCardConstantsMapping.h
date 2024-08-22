// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDCONSTANTSMAPPING_H
#define CNVCARDCONSTANTSMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping; // ivar: _mapping


+(id)CNToVCardInstantMessageConstantsMapping;
+(id)CNToVCardSocialProfileConstantsMapping;
+(id)vCardToCNInstantMessageConstantsMapping;
+(id)vCardToCNSocialProfileConstantsMapping;
-(id)initWithMapping:(id)arg0 ;
-(id)invertedMapping;
-(id)mappedConstant:(id)arg0 ;


@end


#endif