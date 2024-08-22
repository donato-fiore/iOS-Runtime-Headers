// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTORECARDSECTIONENGAGEMENTFEEDBACK_H
#define SFSTORECARDSECTIONENGAGEMENTFEEDBACK_H



#import "SFCardSectionEngagementFeedback.h"

@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) NSInteger productPageResult; // ivar: _productPageResult


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductPageResult:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif