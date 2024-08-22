// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKANALYTICSVISUALSEARCHEVENT_H
#define VKANALYTICSVISUALSEARCHEVENT_H

@class NSCountedSet, NSString;


#import "VKAnalyticsEvent.h"
#import "VKCVisualSearchResultItem.h"

@interface VKAnalyticsVisualSearchEvent : VKAnalyticsEvent

@property (retain, nonatomic) NSCountedSet *allItemDomains; // ivar: _allItemDomains
@property (nonatomic) BOOL didInteractWithResultItem; // ivar: _didInteractWithResultItem
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) NSInteger focalPointItemCount; // ivar: _focalPointItemCount
@property (retain, nonatomic) VKCVisualSearchResultItem *interactedItem; // ivar: _interactedItem
@property (nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (readonly, nonatomic) NSString *itemDomain;
@property (readonly, nonatomic) BOOL itemHasFocalPoint;
@property (readonly, nonatomic) NSInteger nonFocalPointItemCount;
@property (nonatomic) CGFloat serverProcessingTime; // ivar: _serverProcessingTime
@property (nonatomic) BOOL serverResultWasCached; // ivar: _serverResultWasCached


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithType:(NSInteger)arg0 items:(id)arg1 interactedItem:(id)arg2 serverProcessingTime:(CGFloat)arg3 customIdentifier:(id)arg4 ;
-(void)processItems:(id)arg0 ;


@end


#endif