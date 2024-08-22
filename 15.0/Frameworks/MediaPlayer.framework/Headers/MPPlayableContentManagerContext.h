// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPLAYABLECONTENTMANAGERCONTEXT_H
#define MPPLAYABLECONTENTMANAGERCONTEXT_H


#import <Foundation/Foundation.h>


@interface MPPlayableContentManagerContext : NSObject

@property (readonly, nonatomic) BOOL contentLimitsEnabled;
@property (nonatomic) BOOL contentLimitsEnforced; // ivar: _contentLimitsEnforced
@property (nonatomic) BOOL endpointAvailable; // ivar: _endpointAvailable
@property (nonatomic) NSInteger enforcedContentItemsCount; // ivar: _enforcedContentItemsCount
@property (nonatomic) NSInteger enforcedContentTreeDepth; // ivar: _enforcedContentTreeDepth




@end


#endif