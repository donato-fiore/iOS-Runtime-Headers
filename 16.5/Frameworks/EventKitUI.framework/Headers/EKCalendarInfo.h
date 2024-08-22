// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARINFO_H
#define EKCALENDARINFO_H

@class NSString, EKCalendar, UIColor;

#import <Foundation/Foundation.h>

#import "EKGroupInfo.h"

@interface EKCalendarInfo : NSObject {
    NSString *_title;
}


@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSUInteger customGroupType; // ivar: _customGroupType
@property (readonly, nonatomic) int displayOrder;
@property (nonatomic) BOOL filteredByFocus; // ivar: _filteredByFocus
@property (weak, nonatomic) EKGroupInfo *group; // ivar: _group
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly, copy, nonatomic) NSString *title;


-(id)description;
-(id)initWithCalendar:(id)arg0 ;
-(void)_updateCustomGroupType;


@end


#endif