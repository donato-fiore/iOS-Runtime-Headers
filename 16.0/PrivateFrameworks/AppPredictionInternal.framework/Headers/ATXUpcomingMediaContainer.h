// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUPCOMINGMEDIACONTAINER_H
#define ATXUPCOMINGMEDIACONTAINER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXUpcomingMediaContainer : NSObject {
    NSMutableArray *_maybeSortedUpcomingMedia;
    BOOL _sorted;
}


@property (readonly, nonatomic) NSMutableDictionary *bucketExpiredUpcomingMedia; // ivar: _bucketExpiredUpcomingMedia
@property (readonly, nonatomic) NSMutableDictionary *bucketValidUpcomingMedia; // ivar: _bucketValidUpcomingMedia
@property (readonly, nonatomic) NSMutableDictionary *containerExpiredUpcomingMedia; // ivar: _containerExpiredUpcomingMedia
@property (readonly, nonatomic) NSMutableDictionary *containerValidUpcomingMedia; // ivar: _containerValidUpcomingMedia
@property (nonatomic) BOOL isInternalApplication; // ivar: _isInternalApplication
@property (readonly, nonatomic) NSMutableDictionary *itemExpiredUpcomingMedia; // ivar: _itemExpiredUpcomingMedia
@property (readonly, nonatomic) NSMutableDictionary *itemValidUpcomingMedia; // ivar: _itemValidUpcomingMedia
@property (nonatomic) BOOL preferUpcomingMediaForPredictions; // ivar: _preferUpcomingMediaForPredictions
@property (nonatomic) BOOL preferenceForUpcomingMediaIsSet; // ivar: _preferenceForUpcomingMediaIsSet
@property (readonly, nonatomic) NSMutableArray *sortedUpcomingMedia;


+(void)addToDictionary:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(BOOL)appSupportsUpcomingMedia;
-(id)init;
-(void)addUpcomingMediaIntent:(id)arg0 withRank:(id)arg1 ;


@end


#endif