// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNASUBTRACKER_H
#define ICNASUBTRACKER_H

@class AATracker, NSString;

#import <Foundation/Foundation.h>


@interface ICNASubTracker : NSObject

@property (retain) AATracker *aaTracker; // ivar: _aaTracker
@property (readonly, copy, nonatomic) NSString *aaTrackerName; // ivar: _aaTrackerName


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 parentAATracker:(id)arg1 ;
-(id)initWithName:(id)arg0 parentTracker:(id)arg1 ;


@end


#endif