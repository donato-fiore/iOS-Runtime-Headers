// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCINEMATICTRACKINGRESULT_H
#define FTCINEMATICTRACKINGRESULT_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FTCinematicTapResponse.h"

@interface FTCinematicTrackingResult : NSObject <NSSecureCoding>



@property (nonatomic) BOOL detectorDidRun; // ivar: _detectorDidRun
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) ? mostRecentTapTime; // ivar: _mostRecentTapTime
@property (nonatomic) ? sourceFrameTimestamp; // ivar: _sourceFrameTimestamp
@property (retain, nonatomic) FTCinematicTapResponse *tapResponse; // ivar: _tapResponse
@property (retain, nonatomic) NSArray *tracks; // ivar: _tracks


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif