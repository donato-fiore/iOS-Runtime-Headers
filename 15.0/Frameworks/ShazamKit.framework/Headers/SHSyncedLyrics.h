// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSYNCEDLYRICS_H
#define SHSYNCEDLYRICS_H

@class NSArray, NSDate, NSTimer;
@protocol NSSecureCoding, SHSyncedLyricsDelegate;

#import <Foundation/Foundation.h>


@interface SHSyncedLyrics : NSObject <NSSecureCoding>



@property (weak, nonatomic) NSObject<SHSyncedLyricsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *lines; // ivar: _lines
@property (readonly, nonatomic) NSDate *lyricsStartDate; // ivar: _lyricsStartDate
@property (nonatomic) CGFloat preCueDuration; // ivar: _preCueDuration
@property (retain, nonatomic) NSArray *songwriters; // ivar: _songwriters
@property (nonatomic) CGFloat timeWarp; // ivar: _timeWarp
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(BOOL)supportsSecureCoding;
-(CGFloat)fireTimeForLine:(id)arg0 ;
-(CGFloat)offsetFromStartDate;
-(CGFloat)timeToLine:(id)arg0 afterDuration:(CGFloat)arg1 ;
-(id)currentLyricLineForOffset:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLyricsStartDate:(id)arg0 lines:(id)arg1 songwriters:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startSyncing;
-(void)stopSyncing;


@end


#endif