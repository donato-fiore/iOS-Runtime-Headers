// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKBREAKTHROUGHRESULT_H
#define ABPKBREAKTHROUGHRESULT_H


#import <Foundation/Foundation.h>

#import "ABPK2dSkeleton.h"

@interface ABPKBreakthroughResult : NSObject {
    ABPK2dSkeleton *_skeleton2D;
    unsigned int _trackingId;
    BOOL _isFaceVisible;
    BOOL _isRaisingHand;
    BOOL _isWavingHand;
}


@property (readonly, nonatomic) BOOL isFaceVisible;
@property (readonly, nonatomic) BOOL isPoseValid; // ivar: _isPoseValid
@property (readonly, nonatomic) BOOL isRaisingHand;
@property (readonly, nonatomic) BOOL isWavingHand;
@property (readonly, nonatomic) ABPK2dSkeleton *skeleton2D;
@property (readonly, nonatomic) unsigned int trackingId;


-(id)init;
-(id)initWith2dSkeleton:(id)arg0 isPoseValid:(BOOL)arg1 trackingId:(unsigned int)arg2 isFaceVisible:(BOOL)arg3 isRaisingHand:(BOOL)arg4 isWavingHand:(BOOL)arg5 ;
-(int)overlayResultOnImage:(struct __CVBuffer *)arg0 withResult:(struct __CVBuffer *)arg1 withColor;
-(void)set2dSkeleton:(id)arg0 isPoseValid:(BOOL)arg1 trackingId:(unsigned int)arg2 isFaceVisible:(BOOL)arg3 isRaisingHand:(BOOL)arg4 isWavingHand:(BOOL)arg5 ;


@end


#endif