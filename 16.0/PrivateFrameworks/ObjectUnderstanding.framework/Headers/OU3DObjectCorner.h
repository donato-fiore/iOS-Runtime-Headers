// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OU3DOBJECTCORNER_H
#define OU3DOBJECTCORNER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface OU3DObjectCorner : NSObject {
    NSMutableArray *_timer;
    CGFloat kCornerTimerThreshold;
    CGFloat kCornerLocationThreshold;
}


@property (retain) NSArray *coordinate; // ivar: _coordinate
@property (retain) NSArray *inView; // ivar: _inView
@property (readonly, nonatomic) BOOL isCompleted; // ivar: isCompleted
@property (retain) NSArray *timestamp; // ivar: _timestamp


-(id)init;
-(void)addCornerStatus:(id)arg0 inView:(id)arg1 timestamp;
-(void)updateIsCompleted;


@end


#endif