// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLIPTRACK_H
#define CLIPTRACK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ClipTrack : NSObject {
    int _clipType;
    int _trackID;
    NSMutableArray *_clips;
}




+(id)nameForClipType:(int)arg0 trackID:(int)arg1 ;
-(NSInteger)indexOfClip:(id)arg0 ;
-(id)clips;
-(id)initWithClipType:(int)arg0 trackID:(int)arg1 ;
-(id)trackName;
-(int)clipType;
-(void)addClip:(id)arg0 ;
-(void)insertClip:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeClip:(id)arg0 ;


@end


#endif