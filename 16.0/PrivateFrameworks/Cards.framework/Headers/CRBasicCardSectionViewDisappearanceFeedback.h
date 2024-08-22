// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRBASICCARDSECTIONVIEWDISAPPEARANCEFEEDBACK_H
#define CRBASICCARDSECTIONVIEWDISAPPEARANCEFEEDBACK_H

@class SFFeedback, NSString;
@protocol CRCardSectionViewDisappearanceFeedback, CRCardSection;

#import <Foundation/Foundation.h>


@interface CRBasicCardSectionViewDisappearanceFeedback : NSObject <CRCardSectionViewDisappearanceFeedback>



@property (readonly, nonatomic) SFFeedback *backingFeedback;
@property (retain, nonatomic) NSObject<CRCardSection> *cardSection; // ivar: _cardSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif