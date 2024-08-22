// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANALYTICSGROUP_H
#define ANANALYTICSGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ANAnalyticsGroup : NSObject

@property (readonly, nonatomic) NSArray *announcements; // ivar: _announcements
@property (readonly, nonatomic) NSArray *metadata; // ivar: _metadata


-(id)init;
-(void)addAnnouncement:(id)arg0 metadata:(id)arg1 ;


@end


#endif