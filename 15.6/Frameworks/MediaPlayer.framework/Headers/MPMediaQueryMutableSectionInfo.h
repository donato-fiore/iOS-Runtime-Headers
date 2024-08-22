// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAQUERYMUTABLESECTIONINFO_H
#define MPMEDIAQUERYMUTABLESECTIONINFO_H

@class NSArray;


#import "MPMediaQuerySectionInfo.h"

@interface MPMediaQueryMutableSectionInfo : MPMediaQuerySectionInfo

@property (copy, nonatomic) NSArray *sectionIndexTitles;


-(void)addSectionWithHeaderTitle:(id)arg0 sectionIndexTitleIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 ;


@end


#endif