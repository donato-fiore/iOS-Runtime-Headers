// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTSTORAGEGUARDEDDATA_H
#define PPEVENTSTORAGEGUARDEDDATA_H

@class EKTimedEventStorePurger, NSSet;

#import <Foundation/Foundation.h>


@interface PPEventStorageGuardedData : NSObject {
    EKTimedEventStorePurger *_ekStorePurger;
    NSSet *_calendarIdentifiers;
    NSSet *_invisibleCalendarIdentifiers;
}




-(id)ekStore;


@end


#endif