// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVOLUMEBUTTONMANAGER_H
#define WFVOLUMEBUTTONMANAGER_H


#import <Foundation/Foundation.h>


@interface WFVolumeButtonManager : NSObject

@property (copy, nonatomic) id *pressHandler; // ivar: _pressHandler


-(id)initWithPressHandler:(id)arg0 ;
-(void)dealloc;
-(void)volumeButtonPressed;


@end


#endif