// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEPLAYBACKDETAILS_H
#define MNTRACEPLAYBACKDETAILS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNTracePlaybackDetails : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *bookmarks; // ivar: _bookmarks
@property (nonatomic) CGFloat currentPosition; // ivar: _currentPosition
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *pedestrianTracePath; // ivar: _pedestrianTracePath
@property (nonatomic) CGFloat pedestrianTraceStartRelativeTimestamp; // ivar: _pedestrianTraceStartRelativeTimestamp
@property (nonatomic) NSUInteger recordedBookmarkID; // ivar: _recordedBookmarkID
@property (nonatomic) CGFloat traceDuration; // ivar: _traceDuration
@property (copy, nonatomic) NSString *tracePath; // ivar: _tracePath


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif