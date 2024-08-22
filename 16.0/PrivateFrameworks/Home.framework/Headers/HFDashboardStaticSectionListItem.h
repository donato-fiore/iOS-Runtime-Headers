// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDASHBOARDSTATICSECTIONLISTITEM_H
#define HFDASHBOARDSTATICSECTIONLISTITEM_H

@class NSString;
@protocol HFReorderableItemListItemProtocol;


#import "HFStaticItem.h"

@interface HFDashboardStaticSectionListItem : HFStaticItem <HFReorderableItemListItemProtocol>

 {
    ? uuidString;
    ? sectionType;
}


@property (nonatomic, copy) NSString *uuidString;


-(id)initWithResults:(id)arg0 ;
-(id)initWithResultsBlock:(id)arg0 ;


@end


#endif