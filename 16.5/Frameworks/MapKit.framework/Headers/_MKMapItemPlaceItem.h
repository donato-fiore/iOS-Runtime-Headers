// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMAPITEMPLACEITEM_H
#define _MKMAPITEMPLACEITEM_H

@class EKCalendarItem, CNContact, NSString;
@protocol _MKPlaceItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem>

 {
    MKMapItem *_mapItem;
    NSUInteger _options;
    BOOL _isIntermediateMapItem;
}


@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContactOnly;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContactPersisted;
@property (readonly, nonatomic) BOOL isIntermediateMapItem;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger options;
@property (readonly) Class superclass;


+(id)placeItemWithMapItem:(id)arg0 options:(NSUInteger)arg1 ;
+(id)placeItemWithMapItem:(id)arg0 options:(NSUInteger)arg1 isIntermediateMapItem:(BOOL)arg2 ;
-(void)setIsSuggestedFavorite:(BOOL)arg0 ;


@end


#endif