// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISUBTEST_H
#define UISUBTEST_H

@class NSNumber, NSMutableArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UISubTest : NSObject {
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    BOOL _showTime;
    BOOL _showFps;
    NSMutableDictionary *_data;
}


@property (readonly) NSNumber *startTime; // ivar: _startTime


-(id)getObjectForKey:(id)arg0 ;
-(id)initWithName:(id)arg0 metrics:(id)arg1 ;
-(id)outputData;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)startWithFrameCount:(id)arg0 ;
-(void)stopWithFrameCount:(id)arg0 ;


@end


#endif