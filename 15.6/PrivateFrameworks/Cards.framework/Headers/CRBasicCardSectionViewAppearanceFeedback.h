// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRBASICCARDSECTIONVIEWAPPEARANCEFEEDBACK_H
#define CRBASICCARDSECTIONVIEWAPPEARANCEFEEDBACK_H

@class SFFeedback, NSString;
@protocol CRCardSectionViewAppearanceFeedback, CRCardSection;

#import <Foundation/Foundation.h>


@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback>



@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (retain, nonatomic) NSObject<CRCardSection> *cardSection; // ivar: _cardSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif