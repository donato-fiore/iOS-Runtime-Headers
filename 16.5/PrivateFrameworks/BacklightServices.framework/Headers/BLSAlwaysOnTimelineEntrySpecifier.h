// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSALWAYSONTIMELINEENTRYSPECIFIER_H
#define BLSALWAYSONTIMELINEENTRYSPECIFIER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BLSAlwaysOnTimelineEntry.h"

@interface BLSAlwaysOnTimelineEntrySpecifier : NSObject <NSCopying>

 {
    NSInteger _requestedFidelity;
    os_unfair_lock_s _lock;
}


@property BOOL didChange; // ivar: _didChange
@property NSInteger grantedFidelity; // ivar: _grantedFidelity
@property (readonly) CGFloat percentComplete; // ivar: _percentComplete
@property (readonly) BLSAlwaysOnTimelineEntry *previousTimelineEntry; // ivar: _previousTimelineEntry
@property NSInteger requestedFidelity;
@property (readonly) BLSAlwaysOnTimelineEntry *timelineEntry; // ivar: _timelineEntry


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithTimelineEntry:(id)arg0 percentComplete:(CGFloat)arg1 previousTimelineEntry:(id)arg2 didChange:(BOOL)arg3 ;


@end


#endif