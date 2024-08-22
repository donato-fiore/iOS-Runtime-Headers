// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUINOWPLAYINGMONITORBOUNDARYTIMEOBSERVERINFO_H
#define VUINOWPLAYINGMONITORBOUNDARYTIMEOBSERVERINFO_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL notifiedOfEntry; // ivar: _notifiedOfEntry
@property (nonatomic) CGFloat time; // ivar: _time
@property (retain, nonatomic) NSUUID *token; // ivar: _token




@end


#endif