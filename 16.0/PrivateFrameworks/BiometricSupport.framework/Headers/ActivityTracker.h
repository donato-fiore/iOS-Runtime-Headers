// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIVITYTRACKER_H
#define ACTIVITYTRACKER_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface ActivityTracker : NSObject {
    NSString *_description;
    NSObject<OS_os_transaction> *_transaction;
}


@property (copy) id *activityUpdateBlock; // ivar: _activityUpdateBlock


-(id)initWithDescription:(id)arg0 ;
-(void)setActive:(BOOL)arg0 ;


@end


#endif