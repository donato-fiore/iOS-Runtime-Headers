// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPACTIVITYSUGGESTIONS_H
#define CPACTIVITYSUGGESTIONS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CPActivitySuggestions : NSObject {
    ? _queue;
    ? _activityTable;
}


@property (nonatomic, readonly) NSSet *activitySuggestions;


-(BOOL)addActivityWithActivity:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeActivityWithActivity:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)removeActivitiesWithBundleID:(id)arg0 ;


@end


#endif