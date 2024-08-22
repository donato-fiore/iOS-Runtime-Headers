// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTESTGROUPSPECIFIERPROVIDER_H
#define STTESTGROUPSPECIFIERPROVIDER_H

@class NSTimer;


#import "STUsageGroupSpecifierProvider.h"

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}


@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(BOOL)isHidden;
-(id)init;
-(void)dealloc;
-(void)setIsHidden:(BOOL)arg0 ;
-(void)timerFired:(id)arg0 ;


@end


#endif