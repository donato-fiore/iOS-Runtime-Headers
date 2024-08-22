// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPPLAYBACKIMAGELOADINFO_H
#define TVPPLAYBACKIMAGELOADINFO_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TVPPlaybackImageLoadInfo : NSObject

@property (copy, nonatomic) id *dateBasedHandler; // ivar: _dateBasedHandler
@property (retain, nonatomic) id *identifier; // ivar: _identifier
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) ? requestedCMTime; // ivar: _requestedCMTime
@property (retain, nonatomic) NSDate *requestedDate; // ivar: _requestedDate
@property (nonatomic) CGFloat requestedTime; // ivar: _requestedTime
@property (copy, nonatomic) id *timeBasedHandler; // ivar: _timeBasedHandler


-(id)description;
-(void)callCompletionHandlerWithImage:(id)arg0 actualCMTime:(struct ? )arg1 actualDate:(id)arg2 ;


@end


#endif