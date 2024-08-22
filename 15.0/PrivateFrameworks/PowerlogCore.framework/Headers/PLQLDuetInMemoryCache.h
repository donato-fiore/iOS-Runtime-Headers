// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLQLDUETINMEMORYCACHE_H
#define PLQLDUETINMEMORYCACHE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PLQLDuetInMemoryCache : NSObject

@property CGFloat cellIn; // ivar: _cellIn
@property CGFloat cellOut; // ivar: _cellOut
@property int refCount; // ivar: _refCount
@property (retain) NSDictionary *startArgs; // ivar: _startArgs
@property CGFloat startTime; // ivar: _startTime
@property (retain) NSDictionary *stopArgs; // ivar: _stopArgs
@property CGFloat stopTime; // ivar: _stopTime
@property CGFloat wifiIn; // ivar: _wifiIn
@property CGFloat wifiOut; // ivar: _wifiOut


-(BOOL)isStartPresent;
-(BOOL)isStopPresent;
-(id)init;
-(id)initWithStartTime:(CGFloat)arg0 withStartargs:(id)arg1 ;
-(void)addDataWithCellIn:(CGFloat)arg0 withCellOut:(CGFloat)arg1 withWifiIn:(CGFloat)arg2 withWifiOut:(CGFloat)arg3 ;
-(void)addStartEvent:(CGFloat)arg0 withArgs:(id)arg1 ;
-(void)addStopEvent:(CGFloat)arg0 withArgs:(id)arg1 ;
-(void)clearStop;
-(void)updateDataStats:(id)arg0 ;


@end


#endif