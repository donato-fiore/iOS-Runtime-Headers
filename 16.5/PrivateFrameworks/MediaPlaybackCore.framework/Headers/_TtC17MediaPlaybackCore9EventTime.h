// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE9EVENTTIME_H
#define _TTC17MEDIAPLAYBACKCORE9EVENTTIME_H

@class SwiftObject;
@protocol MFTimeStamp;



@interface _TtC17MediaPlaybackCore9EventTime : SwiftObject <MFTimeStamp>

 {
    ? type;
}


@property (nonatomic, readonly) CGFloat avTime; // ivar: avTime
@property (nonatomic, readonly) ? hostTime; // ivar: hostTime
@property (nonatomic) CGFloat time; // ivar: time
@property (nonatomic, readonly) CGFloat userSecondsSinceReferenceDate; // ivar: userSecondsSinceReferenceDate




@end


#endif