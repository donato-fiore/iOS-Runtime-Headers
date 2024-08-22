// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFDATETIMECONTROLLER_H
#define SBFDATETIMECONTROLLER_H

@class NSHashTable, NSDate;

#import <Foundation/Foundation.h>


@interface SBFDateTimeController : NSObject {
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (nonatomic) CGFloat overrideDateOffset; // ivar: _overrideDateOffset


+(id)sharedInstance;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif