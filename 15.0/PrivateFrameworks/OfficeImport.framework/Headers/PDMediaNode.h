// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDMEDIANODE_H
#define PDMEDIANODE_H



#import "PDTimeNode.h"
#import "PDAnimationTarget.h"

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    NSInteger mNumberOfSlides;
    NSInteger mVolume;
}




-(BOOL)isMuted;
-(BOOL)isShowWhenStopped;
-(NSInteger)numberOfSlides;
-(NSInteger)volume;
-(id)init;
-(id)target;
-(void)setIsMuted:(BOOL)arg0 ;
-(void)setIsShowWhenStopped:(BOOL)arg0 ;
-(void)setNumberOfSlides:(NSInteger)arg0 ;
-(void)setTarget:(id)arg0 ;
-(void)setVolume:(NSInteger)arg0 ;


@end


#endif