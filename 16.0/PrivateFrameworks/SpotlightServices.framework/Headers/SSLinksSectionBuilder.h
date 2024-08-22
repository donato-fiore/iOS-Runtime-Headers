// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSLINKSSECTIONBUILDER_H
#define SSLINKSSECTIONBUILDER_H



#import "SSSectionBuilder.h"

@interface SSLinksSectionBuilder : SSSectionBuilder



+(id)supportedBundleId;
-(BOOL)useCompactRowOnMac;
-(NSInteger)maxCardSections;
-(id)buildCardSectionWithResult:(id)arg0 resultBuilder:(id)arg1 ;
-(id)buildCollectionStyle;


@end


#endif