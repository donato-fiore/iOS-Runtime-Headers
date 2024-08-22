// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADSTATSCALENDARINFO_H
#define CADSTATSCALENDARINFO_H


#import <Foundation/Foundation.h>


@interface CADStatsCalendarInfo : NSObject {
    BOOL _isSelected;
    BOOL _isHoliday;
    BOOL _isSubscribed;
    BOOL _isCalDAV;
    BOOL _isAuthenticated;
    BOOL _isShared;
    BOOL _allowsEvents;
    BOOL _isHidden;
    BOOL _isBirthday;
    BOOL _isFacebookBirthday;
    BOOL _isFamily;
    BOOL _isFoundInMail;
    BOOL _isNaturalLanguageSuggestedEvents;
    BOOL _isSharedByMe;
    NSUInteger _numSharees;
    NSUInteger _readOnlySharees;
    NSUInteger _readWriteSharees;
}






@end


#endif