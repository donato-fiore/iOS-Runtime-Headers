// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVMOVE_H
#define CALDAVMOVE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CalDAVMove : NSObject

@property (nonatomic) int changeID; // ivar: _changeID
@property (nonatomic) int itemID; // ivar: _itemID
@property (nonatomic) NSInteger objectType; // ivar: _objectType
@property (retain, nonatomic) NSString *oldExternalID; // ivar: _oldExternalID
@property (nonatomic) int sourceCalendarID; // ivar: _sourceCalendarID


-(id)initWithSourceCalendarID:(int)arg0 itemID:(int)arg1 oldExternalID:(id)arg2 changeID:(int)arg3 objectType:(NSInteger)arg4 ;


@end


#endif