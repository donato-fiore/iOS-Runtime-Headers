// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICEXPLANATION_H
#define PKACCOUNTSUPPORTTOPICEXPLANATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKAccountSupportTopicExplanationContent.h"
#import "PKAccountSupportTopicExplanationLink.h"

@interface PKAccountSupportTopicExplanation : NSObject

@property (readonly, nonatomic) PKAccountSupportTopicExplanationContent *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (readonly, copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, nonatomic) PKAccountSupportTopicExplanationLink *link; // ivar: _link
@property (readonly, copy, nonatomic) NSString *primaryActionTitle; // ivar: _primaryActionTitle
@property (readonly, copy, nonatomic) NSString *secondaryActionTitle; // ivar: _secondaryActionTitle


-(id)initWithDictionary:(id)arg0 ;


@end


#endif