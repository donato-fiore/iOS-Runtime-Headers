// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMUTABLESTATEDUMPBUILDERCONTEXT_H
#define HFMUTABLESTATEDUMPBUILDERCONTEXT_H

@class NSSet, NSDictionary;


#import "HFStateDumpBuilderContext.h"

@interface HFMutableStateDumpBuilderContext : HFStateDumpBuilderContext

@property (nonatomic) NSUInteger detailLevel;
@property (nonatomic) BOOL excludePrimaryID;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (nonatomic) NSUInteger outputStyle;
@property (copy, nonatomic) NSDictionary *userInfo;




@end


#endif