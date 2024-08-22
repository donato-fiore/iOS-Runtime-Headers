// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACTIVITYAUTHORIZATION_H
#define ACACTIVITYAUTHORIZATION_H


#import <Foundation/Foundation.h>

#import "_TtC11ActivityKit21ActivityAuthorization.h"

@interface ACActivityAuthorization : NSObject

@property (retain, nonatomic) _TtC11ActivityKit21ActivityAuthorization *activityAuthorization; // ivar: _activityAuthorization


-(BOOL)areActivitiesEnabledForBundleId:(id)arg0 ;
-(BOOL)supportsActivitesForBundleId:(id)arg0 ;
-(id)init;
-(void)setActivitiesEnabled:(BOOL)arg0 forBundleId:(id)arg1 ;


@end


#endif