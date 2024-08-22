// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRELATEDSEARCHESSECTIONBUILDER_H
#define SSRELATEDSEARCHESSECTIONBUILDER_H



#import "SSSectionBuilder.h"

@interface SSRelatedSearchesSectionBuilder : SSSectionBuilder



+(id)supportedBundleIds;
-(BOOL)shouldSkipSection;
-(BOOL)useHorizontallyScrollingCardSectionUI;
-(id)buildCardSections;
-(id)buildTitle;


@end


#endif