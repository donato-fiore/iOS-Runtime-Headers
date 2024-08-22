// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMNEBULASECONDARYSTATE_H
#define CAMNEBULASECONDARYSTATE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAMNebulaSecondaryState : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger failedStateReadAttemptsCount; // ivar: _failedStateReadAttemptsCount
@property (readonly, nonatomic) NSDate *lastMovieWriteAttemptTime; // ivar: _lastMovieWriteAttemptTime
@property (readonly, nonatomic) NSInteger movieWriteAttemptsCount; // ivar: _movieWriteAttemptsCount
@property (nonatomic) NSInteger stopReasons; // ivar: _stopReasons
@property (retain, nonatomic) NSDate *stopTime; // ivar: _stopTime


+(BOOL)supportsSecureCoding;
+(id)secondaryStateWithContentsOfFile:(id)arg0 ;
-(BOOL)addStopReasons:(NSInteger)arg0 stopTime:(id)arg1 ;
-(BOOL)writeToFile:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyWillAttemptToWriteMovie;


@end


#endif