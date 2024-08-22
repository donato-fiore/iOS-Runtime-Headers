// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKCONTACTPLACEITEM_H
#define _MKCONTACTPLACEITEM_H

@class CNContact, EKCalendarItem, NSString;
@protocol _MKPlaceItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem>

 {
    MKMapItem *_mapItem;
    CNContact *_contact;
    NSUInteger _options;
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


+(id)placeItemWithMapItem:(id)arg0 contact:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif