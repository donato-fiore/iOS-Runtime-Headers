// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPHOTOSSECTIONBUILDER_H
#define SSPHOTOSSECTIONBUILDER_H



#import "SSSectionBuilder.h"

@interface SSPhotosSectionBuilder : SSSectionBuilder



+(id)supportedBundleIds;
-(NSInteger)maxCardSections;
-(id)buildCardSectionWithResult:(id)arg0 resultBuilder:(id)arg1 ;
-(id)buildCollectionStyle;


@end


#endif