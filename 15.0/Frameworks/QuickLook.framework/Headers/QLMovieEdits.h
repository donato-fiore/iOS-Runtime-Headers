// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLMOVIEEDITS_H
#define QLMOVIEEDITS_H


#import <Foundation/Foundation.h>


@interface QLMovieEdits : NSObject

@property (nonatomic) NSUInteger rightRotationsCount; // ivar: _rightRotationsCount
@property (nonatomic) CGFloat trimEndTime; // ivar: _trimEndTime
@property (nonatomic) CGFloat trimStartTime; // ivar: _trimStartTime


+(id)editsWithRightRotationsCount:(NSUInteger)arg0 trimStartTime:(CGFloat)arg1 trimEndTime:(CGFloat)arg2 ;
-(BOOL)hasEdits;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)rotated;
-(BOOL)trimmed;
-(id)init;
-(void)incrementRightRotationsCount;
-(void)resetEditingValues;
-(void)resetTrimmingValues;


@end


#endif